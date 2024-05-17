#ifndef FONCTION_H
#define FONCTION_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <SDL/SDL_rotozoom.h>
#include <limits.h>
#define SCREEN_H 1000
#define SCREEN_W 800
#define FRAMES_PER_SECOND 30
#define NUM_FRAMES 96
#define FRAME_DELAY (1000 / FRAMES_PER_SECOND);


#define SCREEN_WIDTH 1100
#define SCREEN_HEIGHT 700
#define PLAYER_SPEED 5
#define JUMP_HEIGHT 100
#define GRAVITY 5
#define MINIMAP_SCALE_X 0.15
#define MINIMAP_SCALE_Y 0.15



typedef struct{
SDL_Surface *ecran;
Mix_Music *musique;
SDL_Surface *image;
SDL_Rect posecranimg;
}background;
typedef struct{
SDL_Surface *texte;
SDL_Rect posecrantxt;
TTF_Font *police;
SDL_Color couleur;
}text;
typedef struct{
SDL_Surface *image;
Mix_Chunk *son;
SDL_Rect pos_button;
}button;
enum MenuState {
    MAIN_MENU,
    OPTIONS_MENU,
    OPTIONS_GAME,
    GAME,
    TIC,
};
typedef struct{
button boutton,boutton2,boutton3,bouttonv,bouttonv2,bouttonv3,boutton4,boutton11,boutton12,boutton13,boutton5,boutton6,boutton10,boutton9,boutton7,boutton8,boutton14,boutton15;
text txt,txt2,txt3,txt4,txt5,txt6,txt7,txt8,txt9;
background back,back2,back3;

}menu;

typedef struct 
{
SDL_Rect pos;
SDL_Surface *image;
SDL_Surface *image2;
int d; 
}ES;


typedef struct {
    SDL_Surface *img; /*L'image principale */
    SDL_Surface *screen; /* La surface d'affichage (bg de l image)  */
    SDL_Surface *surface; 
    SDL_Surface *background1; /* La première image de fond utilisée pour l'animation. */
    SDL_Surface *sprite;
    SDL_Surface *background2;
    int num_s;
    int max_y;
    SDL_Rect posSprite;          
    SDL_Surface *camera1; /*La surface de travail utilisée pour la caméra. */
    int niv; /*Le niveau */
    SDL_Rect background_pos1; /* La position de l'image de fond principale. */
    SDL_Rect background_pos2;
    SDL_Rect 	camera_pos1,camera_pos2,camera_pos3,camera_pos4,camera_pos5; /* La position de la caméra. */
    SDL_Rect pos,pos2; 
    int music_type;
    int direction; /* La direction du déplacement de la caméra. */
    int num; 
    Mix_Music *music[3]; /* Les musiques  */
    Mix_Chunk *attack_sound; /* Le son utilisé pour l'attaque. */
    Mix_Chunk *saut_sound; /*Le son utilisé pour le saut. */
    int nb_vie; /* Le nombre de vies . */
    int stage; /* Le stade du jeu. */
    ES ground,ground2,ground3,ground4,ground5,ground6,ground7,ground8,ground9,ground10,ground11,ground12,ground13;
    ES ground21,ground22,ground23,ground24,ground25,ground26,ground27,ground28,ground29,ground210,ground211,ground212,ground213;
    ES es1,bonus;
    int collect;
    int dead;
 
}background_g;

typedef struct
{


}level;
//enigme 
typedef struct
{
    SDL_Surface *SpriteSheet; // sprite sheet hiya il image il twila ili feha il animations
    SDL_Rect pos;
    SDL_Rect Clips[12]; // hathi ili bich nstocki feha les zones mita3 il animation
    int frames;        // hathi ili bich t9oli 9adech 3andi min mongela fil sprite sheet
    int ClipLoaded;    // ili bich twarili beha ana zone
} animation;

typedef struct
{
    SDL_Surface *img;
    SDL_Rect p;
    int reponse;
    animation animation;
} enigme;

typedef struct 
{
    int x,y;
    int jump;
    int jumpHeight;
    int jumpCount; 
    SDL_Surface*surface;
    SDL_Surface*surface2;
    
} Player;

typedef struct{
SDL_Surface *texte;
SDL_Rect posecrantxt;
TTF_Font *police;
SDL_Color couleur;
}text_g;

typedef struct {
    SDL_Rect posScreen;
    SDL_Rect posSprite;        
    SDL_Surface* sprite; 
    SDL_Rect posvieSprite;
    SDL_Rect posvie;        
    SDL_Surface* viesprite;  
    text scoretxt,txt;
    int score,s;
    int collision,collision_r,collision_l;
    int direction; 
    int vitesse;             
    int acceleration;      
    int up;
    int vie;   
    int death;
    int is_up;
    int is_running; 
    int attack;
    int maxy;
    char name[10];
    int save;
    int x;
}personnage;

typedef struct
{
  personnage p;
  background_g bg;
}save;



void init_buttons_vs(menu* menu);
void init_buttons_ds(menu* menu);
void init_buttons_is(menu* menu);
void init_son(menu* menu,int* e2,int* m);
void init_back(menu* menu,int* k,int* e2);
void init_buttons_v3(menu* menu);
void init_buttons_v1(menu* menu);
void init_buttons_1(menu* menu);
void init_buttons_14(menu* menu);
void init_buttons_15(menu* menu);
void draw_frame(int frame_num, SDL_Surface* screen);
void wait_frame(void);
void init_buttons_2(menu* menu);
void init_buttons_v2(menu* menu);
void init_buttons_3(menu* menu);
void init_buttons_vs2(menu* menu);
void init_buttons_5v(menu* menu);
void init_buttons_lv(menu* menu);
void init_buttons_l(menu* menu);
void init_buttons_v4(menu* menu);
void init_buttons_5(menu* menu);
void init_buttons_4(menu* menu);
void affichage_b(menu* menu,int* e2,int* d2,int* a1,int* l,int* m,int* m1,int* k,int* mv,int* mv1);
void fonction_event(menu* menu,SDL_Event *event,int *quitter,enum MenuState *currentState,int *e2,int *d,int* d2,int* l,int* m,int* mv,int* m1,int* mv1,int* k,int* a1,int* a2,int* d1);
void update_menu(menu* menu,enum MenuState currentState,int *e1,int* a1,int* d1,int* d,int* e2,int* k);
void liberer(menu menu);





void init_enigme(enigme *e);
void generate_enigme(SDL_Surface *screen, enigme *e, int *alea);
int resolution(SDL_Surface *screen, enigme e,int startTime);
void afficher_resultat(SDL_Surface *screen, int r, enigme *en);
void renderText(SDL_Surface *surface, TTF_Font *font, SDL_Color color, char *text, int x, int y);

/*
   ScoreInfo : le score et le temps pour atteint ce score avec le nom du joueur. 
 */
typedef struct {
    int score; /* score : un entier représentant le score */
    int time;/*un entier : le temps */
    char playerName[20];/* représentant le nom du joueur */
} ScoreInfo;



void save_game(personnage p,background_g bg,char* nomfichier);
void charger(personnage *p,background_g *bg,char* nomfichier);

void initback(background_g *b);
void afficherback(background_g b,SDL_Surface *screen);
void scrolling1(background_g *b,int direction,int pas);
void afficherback2(background_g b,SDL_Surface *screen);
void animerback(background_g *b);
void character_mouvement_2(personnage *p);
void jump2(personnage *p);

void initialiser_image_Best(background_g *image);
void afficherboutonBest(background_g image, SDL_Surface *screen);

int collision_up(SDL_Rect E, SDL_Rect p);
void saveScore(personnage s, char *fileName);
void bestScores(char *fileName, ScoreInfo topScores[]);
int compareScores(const void *score1, const void *score2);
void initialiser_texte(TTF_Font *font, SDL_Color color, char *text, SDL_Surface **surface, SDL_Rect *position);
void afficherBest(SDL_Surface *screen, ScoreInfo topScores[]);
void init_ground_2(ES *g,ES *g2,ES *g3,ES *g4,ES *g5,ES *g6,ES *g7,ES *g8,ES *g9,ES *g10,ES *g11,ES *g12,ES *g13);



void affichertemps(Uint32 startTime);

int checkCollision(SDL_Surface*surfaceA,int xA,int yA,SDL_Surface*surfaceB,int xB,int yB);
void renderTime(SDL_Surface*screen,TTF_Font*font,Uint32 startTime);
void renderMinimap(SDL_Surface*screen);


int time();
void init_ground(ES *g,ES *g2,ES *g3,ES *g4,ES *g5,ES *g6,ES *g7,ES *g8,ES *g9,ES *g10,ES *g11,ES *g12,ES *g13);
void init_es(ES *p);
void init_bonus(ES *p);
int collision_trigo(SDL_Rect E,SDL_Rect p);
int collision(SDL_Rect E, SDL_Rect p);
void events(int* e2,int* d,SDL_Event *event,int *quitter,personnage *p,personnage* p2,Uint32 t_prev,int *direction,background_g *b,int pas,int *donnee,int *score,int *answer,ScoreInfo topScores[],char *fileName,enum MenuState *currentState);
void afficher_es(ES p,SDL_Surface *ecran);
void mouvement_aleatoire(ES *p);
void deplacerIA(ES *E, SDL_Rect posperso);
void jump(personnage *p);
void initPerso(personnage *p);
void animationperso(personnage *p);
void afficherPerso(personnage *p,SDL_Surface *ecran);
void character_mouvement(personnage *p);
void initPerso2(personnage *p);
void animationperso2(personnage *p);
void afficherPerso2(personnage *p,SDL_Surface *ecran);
void arduinoReadData(int* x);
int collision_2(SDL_Rect E, SDL_Rect p);
void affichage(SDL_Surface* screen,int* answer,enigme *e,background_g* b,personnage* p,personnage* p2,ES bonus,ES es1,SDL_Surface* minimapSurface,SDL_Surface* miniplayerSurface,SDL_Surface* minienemySurface2,SDL_Surface* minienemySurface,background_g bestscore,int miniplayerY,int miniplayerX,int minienemyX,int minienemyY,int minimapX,int minimapY,int collect,int dead,int* alea,TTF_Font* font);

void mise_a_jour(int* minienemyX,ES* es1,background_g* b,personnage* p,personnage* p2,int* direction,ES* bonus,int* miniplayerX,int* miniplayerY,int* dead,int* collect,Uint32 elapsedTime,Uint32 frameTime,Uint32 frameStartTime,Uint32 startTime);

void liberer_g(SDL_Surface* screen,background_g b,background_g bestscore,personnage p,personnage p2,SDL_Surface* miniplayerSurface,SDL_Surface* minienemySurface,SDL_Surface* minienemySurface2,SDL_Surface* minimapSurface,TTF_Font* font,ES es1,ES bonus);


typedef struct{
	SDL_Surface* bg;
	SDL_Surface* bg1;
	SDL_Surface* S;
	int s;
	SDL_Surface * X;
	SDL_Surface *O;
	SDL_Rect Posbg;
	int tabsuivi[9];
	SDL_Rect pos;
	int tour;
	int joueur;
	SDL_Surface * SurfaceText;
	TTF_Font * font;
	SDL_Rect PosT;
	SDL_Color textColor;
	SDL_Rect tabS[9];
	SDL_Rect tabPos[9];
	int gagnet;
	
}tic;
     
     
void initialiserTic(tic *t,SDL_Surface * ecran);
void afficherTic(tic t,SDL_Surface* ecran);
int atilganer(int tabsuivi[]);
int minimax(int tabsuivi[],int joueur);
void calcul_coup(int tabsuivi[]);
void Resultat(tic t,SDL_Surface * ecran);
  void liberer_tic(tic t);
void afficherG(int tabsuivi[], SDL_Surface* ecran);


#endif
