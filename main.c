#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "headers.h"

int main ( int argc, char** argv )
{
SDL_Init(SDL_INIT_VIDEO);
SDL_Init(SDL_INIT_AUDIO);
SDL_Init(SDL_INIT_TIMER);
TTF_Init();
int quitter = 1;
int current_frame = 0;
SDL_Event event;
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
int a1,x1,y1,x,y,e,e1,e2,m,m1,d,d1,f,k=0,d2,l;
int a2;
e2=0;
int mv,mv1;
menu menu;
a1=0;
m=0;
m1=0;
d=0;
d1=0;
f=0;
d2=0;
l=0;
a2=0;
mv=100;
mv1=100;
init_son(&menu,&e2,&m);
init_back(&menu,&k,&e2);
Mix_VolumeMusic(100);
init_buttons_1(&menu);
init_buttons_4(&menu);
init_buttons_v4(&menu);
init_buttons_2(&menu);
init_buttons_3(&menu);
init_buttons_5(&menu);
init_buttons_5v(&menu);
init_buttons_l(&menu);
init_buttons_lv(&menu);
init_buttons_is(&menu);
init_buttons_ds(&menu);
init_buttons_vs(&menu);
init_buttons_vs2(&menu);
init_buttons_v1(&menu);
init_buttons_v2(&menu);
init_buttons_v3(&menu);
init_buttons_14(&menu);
init_buttons_15(&menu);
enum MenuState currentState = MAIN_MENU; 
while(quitter)
{
if(e2<2)
{
affichage_b(&menu,&e2,&d2,&a1,&l,&m,&m1,&k,&mv,&mv1);
if(e2==0)
{
draw_frame(current_frame, menu.back.ecran);
wait_frame();
current_frame = (current_frame + 1) % NUM_FRAMES;
}

SDL_PollEvent(&event);
       fonction_event(&menu,&event,&quitter,&currentState,&e2,&d,&d2,&l,&m,&mv,&m1,&mv1,&k,&a1,&a2,&d1);
	update_menu(&menu,currentState,&e1,&a1,&d1,&d,&e2,&k);
	SDL_Flip(menu.back.ecran);
	}
else if(e2==2)
	{
	
	Uint32 startTime=SDL_GetTicks();
ES es1,persot,bonus;

    int i=0;
    int j=0;
    int dead=0;
    srand(time( NULL ));
 int answer=0;
    background_g b2,b,bestscore;
    SDL_Event event;

    int direction,niv;
    int score=0;
    if(SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        printf("ERROR :%s\n",SDL_GetError());
        return -1;
    }

    SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL); // ???
    
    Mix_Music *music;
    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
    {
        printf("%s",Mix_GetError());
    }
    initback(&b);
    initback(&b2);
    int alea;

    enigme e;
    init_enigme(&e);
    
   Mix_PlayMusic(b.music[1], -1);

    int donnee=0;
    int pas= 10;
    int i2=0;
    TTF_Init();
	
    initialiser_image_Best(&bestscore);
    SDL_WM_SetCaption("Meilleurs scores", NULL);
        ScoreInfo topScores[3];
    
    ScoreInfo s = { 3500, 120, "Amiiiin" };
    
    //font
    TTF_Font*font=TTF_OpenFont("CookieCrisp.ttf",20);
    if (font==NULL) 
    {
        fprintf(stderr,"erreur font: %s\n",TTF_GetError());
        return 1;
    }
    //player pic


    init_es(&b.es1);

init_ground(&b.ground,&b.ground2,&b.ground3,&b.ground4,&b.ground5,&b.ground6,&b.ground7,&b.ground8,&b.ground9,&b.ground10,&b.ground11,&b.ground12,&b.ground13);
init_ground_2(&b.ground21,&b.ground22,&b.ground23,&b.ground24,&b.ground25,&b.ground26,&b.ground27,&b.ground28,&b.ground29,&b.ground210,&b.ground211,&b.ground212,&b.ground213);
int collect=0;
init_bonus(&b.bonus);
Uint32 dt,t_prev;
personnage p,p2;
int q=0;
int numperso=1;
initPerso(&p);	
initPerso2(&p2);
saveScore(p, "scores.txt");
    bestScores("scores.txt", topScores);
    	
    const int maxy;
        
    //miniplayer pic
    SDL_Surface*miniplayerSurface=IMG_Load("mini_player.png");
    //minienemy pic
    SDL_Surface*minienemySurface=IMG_Load("mini_enemy.png");
    SDL_Surface*minienemySurface2=IMG_Load("mini_enemy2.png");
    //minimap pic
    SDL_Surface*minimapSurface=IMG_Load("minimap.png");
    //position enemy
    int enemyX=750;
    int enemyY=320;
    
    //position minienemy
    int minienemyX=b.es1.pos.x*MINIMAP_SCALE_X+100;
    int minienemyY=63;
    
    //position minimap
    int minimapX=60;
    int minimapY=10;
    
    //position miniplayer
    int miniplayerX=100;
    int miniplayerY=63;
    Uint32 elapsedTime=0;
    Uint32 frameStartTime;
    Uint32 frameTime;   
    minienemyX=b.es1.pos.x*MINIMAP_SCALE_X+100;
	arduinoReadData(&(p.x));
    	
    while((!donnee)||(answer==-1))
    {
    
    frameStartTime=SDL_GetTicks();
    	t_prev=SDL_GetTicks();
    	 affichage(menu.back.ecran,&answer,&e,&b,&p,&p2,b.bonus,b.es1,minimapSurface,miniplayerSurface,minienemySurface2,minienemySurface,bestscore,miniplayerY,miniplayerX,minienemyX,minienemyY,minimapX,minimapY,b.collect,b.dead,&alea,font);
	
        SDL_PollEvent(&event); 
	events(&e2,&d,&event,&q,&p,&p2,t_prev,&direction,&b,pas,&donnee,&score,&answer,topScores,"scores.txt",&currentState);  
	mise_a_jour(&minienemyX,&b.es1,&b,&p,&p2,&direction,&b.bonus,&miniplayerX,&miniplayerY,&b.dead,&b.collect,elapsedTime,frameTime,frameStartTime,startTime);       
	SDL_Delay(10);
	SDL_Flip(menu.back.ecran);	
	
	}
	liberer_g(menu.back.ecran,b,bestscore,p,p2,miniplayerSurface,minienemySurface,minienemySurface2,minimapSurface,font,b.es1,b.bonus);
	

	
    	
	init_back(&menu,&k,&e2);
	}
else if(e2==3)
	{
	tic t;
    int i, coup = 0;
    char tentative[20];
    int continu, x, y;
    SDL_Event event;
    int quitter = 1;
    t.gagnet = 0;
    for (i = 0; i < 3 && quitter == 1; i++) {
        initialiserTic(&t, menu.back.ecran);
        if (t.joueur == 0) {
            continu = 0;
            quitter = 0;
        } else {
            sprintf(tentative, " ROUND %d", i + 1);
            t.SurfaceText = TTF_RenderText_Solid(t.font, tentative, t.textColor);
            SDL_BlitSurface(t.bg1, NULL, menu.back.ecran, &t.Posbg);
            SDL_BlitSurface(t.SurfaceText, NULL, menu.back.ecran, &t.PosT);
            SDL_Flip(menu.back.ecran);
            SDL_Delay(2000);
            t.tour = 1;
            continu = 1;

            while (continu) {
                afficherTic(t, menu.back.ecran);
                SDL_Flip(menu.back.ecran);
                if (t.joueur == -1) {
                    if (t.tour < 10 && atilganer(t.tabsuivi) == 0) {
       
                        if ((t.tour) % 2 == 1) {
                            calcul_coup(t.tabsuivi);
                            t.tour++;
                        } else {
                            while (SDL_PollEvent(&event)) {
                                switch (event.type) {
                                    case SDL_MOUSEBUTTONDOWN:
                                        t.s = -1;
                                        if (event.button.x > 90 && event.button.x < 710 &&
                                            event.button.y > 65 && event.button.y < 730) {
                                            x = (event.button.x - 90) / 205;
                                            y = (event.button.y - 65) / 155;
                                            coup = 3 * y + x;
                                            if (t.tabsuivi[coup] == 0) {
                                                t.tabsuivi[coup] = -1;
                                                t.tour++;
                                            }
                                        }
                                        break;
                                    case SDL_QUIT:
                                        continu = 0;
                                        quitter = 0;
                                        break;

                                    case SDL_KEYDOWN:
                                        switch (event.key.keysym.sym) {
                                            case SDLK_UP:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s < 3 && t.s >= 0)
                                                    t.s = 6 + t.s;
                                                else
                                                    t.s = t.s - 3;

                                                break;

                                            case SDLK_DOWN:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s < 9 && t.s >= 6)
                                                    t.s = t.s - 6;
                                                else
                                                    t.s = t.s + 3;
                                                break;

                                            case SDLK_LEFT:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s == 0)
                                                    t.s = 8;
                                                else
                                                    t.s = t.s - 1;
                                                break;

                                            case SDLK_RIGHT:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s == 8)
                                                    t.s = 0;
                                                else
                                                    t.s = t.s + 1;
                                                break;
                                            case SDLK_x:
                                                if (t.s != -1) {
                                                    if (t.tabsuivi[t.s] == 0) {
                                                        t.tabsuivi[t.s] = -1;
                                                        t.tour++;
                                                    }
                                                }
                                                break;
                                        }
                                }
                            }
                        }
                    } else {
                        afficherG(t.tabsuivi, menu.back.ecran);
                        SDL_Delay(2000);
                        if (atilganer(t.tabsuivi) == -1)
                            t.gagnet++;
                        continu = 0;
                    }

                } else {
                    if (t.tour < 10 && atilganer(t.tabsuivi) == 0) {
                      
                        if ((t.tour) % 2 == 1) {
                            while (SDL_PollEvent(&event)) {
                                switch (event.type) {
                                    case SDL_MOUSEBUTTONDOWN:
                                        t.s = -1;

                                        if (event.button.x > 90 && event.button.x < 710 &&
                                            event.button.y > 65 && event.button.y < 730) {
                                            x = (event.button.x - 90) / 205;
                                            y = (event.button.y - 65) / 155;
                                            coup = 3 * y + x;
                                            if (t.tabsuivi[coup] == 0) {
                                                t.tabsuivi[coup] = -1;
                                                t.tour++;
                                            }
                                        }
                                        break;
                                    case SDL_QUIT:
                                        continu = 0;
                                        quitter = 0;
                                        break;

                                    case SDL_KEYDOWN:
                                        switch (event.key.keysym.sym) {
                                            case SDLK_UP:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s < 3 && t.s >= 0)
                                                    t.s = 6 + t.s;
                                                else
                                                    t.s = t.s - 3;

                                                break;

                                            case SDLK_DOWN:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s < 9 && t.s >= 6)
                                                    t.s = t.s - 6;
                                                else
                                                    t.s = t.s + 3;
                                                break;

                                            case SDLK_LEFT:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s == 0)
                                                    t.s = 8;
                                                else
                                                    t.s = t.s - 1;
                                                break;

                                            case SDLK_RIGHT:
                                                if (t.s == -1)
                                                    t.s = 0;
                                                else if (t.s == 8)
                                                    t.s = 0;
                                                else
                                                    t.s = t.s + 1;
                                                break;
                                            case SDLK_x:
                                                if (t.s != -1) {
                                                    if (t.tabsuivi[t.s] == 0) {
                                                        t.tabsuivi[t.s] = -1;
                                                        t.tour++;
                                                    }
                                                }
                                                break;
                                        }
                                }
                            }
                        } else {
                            calcul_coup(t.tabsuivi);
                            t.tour++;
                        }

                    } else {
                        afficherG(t.tabsuivi, menu.back.ecran);
                        SDL_Delay(2000);
                        if (atilganer(t.tabsuivi) == -1)
                            t.gagnet++;
                        continu = 0;
                    }
                }
                SDL_Flip(menu.back.ecran);
                SDL_Delay(500);
            }
        }
    }
    /*/if (quitter == 1) 
    {
        Resultat(t, menu.back.ecran);
        SDL_Flip(menu.back.ecran);
        SDL_Delay(2000);
    }*/
	liberer_tic(t);
	e2=0;
	init_back(&menu,&k,&e2);
	}

}
liberer(menu);

	return (0);

}


