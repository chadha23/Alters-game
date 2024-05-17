#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "headers.h"

void init_son(menu* menu,int* e2,int* m)
{
if((*e2)==0)
	{
	if((*m)==0)
{
menu->back.musique = Mix_LoadMUS("music.mp3");
      Mix_PlayMusic(menu->back.musique, -1);
      }
      }

}

void init_back(menu* menu,int* k,int* e2)
{


if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Echec d'initialisation de SDL : %s\n", SDL_GetError());
		
	}
	switch(*k)
	{
	case 0:
	menu->back.ecran = SDL_SetVideoMode(931, 525,  32,SDL_HWSURFACE | SDL_DOUBLEBUF );
	break;
	case 1:
	menu->back.ecran=SDL_SetVideoMode(931, 525,  32,SDL_HWSURFACE | SDL_DOUBLEBUF |  SDL_FULLSCREEN);
	break;
	}
	
	if (menu->back.ecran== NULL )
	{
		fprintf(stderr, "Echec de creation de la fenetre de 300*300: %s.\n", SDL_GetError());
		
	}
	if((*e2)==0)
	{
	menu->back.image= IMG_Load ("background.jpg");
	menu->back.posecranimg.x = 0;
	menu->back.posecranimg.y = 0;
	menu->back.posecranimg.w = menu->back.image->w;
	menu->back.posecranimg.h = menu->back.image->h;	
	menu->txt.posecrantxt.x=(760);
	menu->txt.posecrantxt.y=(77);
        menu->txt.couleur.r=0;
        menu->txt.couleur.g=0;
        menu->txt.couleur.b=0;
        menu->txt.police = TTF_OpenFont ("Apple Cream.otf", 30);
        
        menu->txt2.posecrantxt.x=(760);
	menu->txt2.posecrantxt.y=(177);
        menu->txt2.couleur.r=0;
        menu->txt2.couleur.g=0;
        menu->txt2.couleur.b=0;
        menu->txt2.police = TTF_OpenFont ("Apple Cream.otf", 30);
        
        menu->txt3.posecrantxt.x=(760);
	menu->txt3.posecrantxt.y=(277);
        menu->txt3.couleur.r=0;
        menu->txt3.couleur.g=0;
        menu->txt3.couleur.b=0;
        menu->txt3.police = TTF_OpenFont ("Apple Cream.otf", 30);
        menu->txt5.couleur.r=255;
        menu->txt5.couleur.g=255;
        menu->txt5.couleur.b=255;
        menu->txt5.police = TTF_OpenFont ("Apple Cream.otf", 25);
        
        }
        else if((*e2)==1)
        {
        	
        	menu->back.image= IMG_Load ("setting.png");

	menu->back.posecranimg.x = 0;
	menu->back.posecranimg.y = 0;
	menu->back.posecranimg.w = menu->back.image->w;
	menu->back.posecranimg.h = menu->back.image->h;
	menu->txt2.posecrantxt.x=(420);
	menu->txt2.posecrantxt.y=(30);
	menu->txt.posecrantxt.x=(440);
	menu->txt.posecrantxt.y=(83);	
        menu->txt3.posecrantxt.x=(424);
	menu->txt3.posecrantxt.y=(419);
	menu->txt4.posecrantxt.x=(430);
	menu->txt4.posecrantxt.y=(226);
	menu->txt4.couleur.r=0;
        menu->txt4.couleur.g=0;
        menu->txt4.couleur.b=0;
        menu->txt4.police = TTF_OpenFont ("Apple Cream.otf", 30);
        menu->txt6.posecrantxt.x=(465);
	menu->txt6.posecrantxt.y=(177);
	menu->txt6.couleur.r=255;
        menu->txt6.couleur.g=255;
        menu->txt6.couleur.b=255;
        menu->txt6.police = TTF_OpenFont ("Apple Cream.otf", 25);
        menu->txt7.posecrantxt.x=(420);
	menu->txt7.posecrantxt.y=(348);
	menu->txt7.couleur.r=0;
        menu->txt7.couleur.g=0;
        menu->txt7.couleur.b=0;
        menu->txt7.police = TTF_OpenFont ("Apple Cream.otf", 30);
        menu->txt8.posecrantxt.x=(416);
	menu->txt8.posecrantxt.y=(308);
	menu->txt8.couleur.r=0;
        menu->txt8.couleur.g=0;
        menu->txt8.couleur.b=0;
        menu->txt8.police = TTF_OpenFont ("Apple Cream.otf", 30);
        menu->txt9.posecrantxt.x=(404);
	menu->txt9.posecrantxt.y=(265);
	menu->txt9.couleur.r=0;
        menu->txt9.couleur.g=0;
        menu->txt9.couleur.b=0;
        menu->txt9.police = TTF_OpenFont ("Apple Cream.otf", 30);
        menu->txt5.posecrantxt.x=(465);
	menu->txt5.posecrantxt.y=(122);
	
        }
        else if((*e2)==2)
	{
switch(*k)
	{
	case 0:
	menu->back.ecran = SDL_SetVideoMode(1100, 700,  32,SDL_HWSURFACE | SDL_DOUBLEBUF );
	break;
	case 1:
	menu->back.ecran=SDL_SetVideoMode(1100, 700,  32,SDL_HWSURFACE | SDL_DOUBLEBUF |  SDL_FULLSCREEN);
	break;
	}

        }
        else if((*e2)==3)
	{
switch(*k)
	{
	case 0:
	menu->back.ecran = SDL_SetVideoMode(842, 595, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);;
	break;
	case 1:
	menu->back.ecran=SDL_SetVideoMode(842, 595, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN);
	break;
	}

        }

}
void init_buttons_v3(menu* menu)
{
		menu->bouttonv3.image = IMG_Load ("exit1.png");
	menu->bouttonv3.pos_button.x = 700;
	menu->bouttonv3.pos_button.y = 275;
	menu->bouttonv3.pos_button.w = menu->bouttonv3.image->w;
	menu->bouttonv3.pos_button.h = menu->bouttonv3.image->h;
	
}
void init_buttons_4(menu *menu)
{
		menu->boutton4.image = IMG_Load ("bouton_son.png");
	menu->boutton4.pos_button.x = 308;
	menu->boutton4.pos_button.y = 180;
	menu->boutton4.pos_button.w = menu->boutton4.image->w;
	menu->boutton4.pos_button.h = menu->boutton4.image->h;
	menu->boutton4.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_v4(menu* menu)
{
		menu->boutton10.image = IMG_Load ("bouton_son1.png");
	menu->boutton10.pos_button.x = 308;
	menu->boutton10.pos_button.y = 180;
	menu->boutton10.pos_button.w = menu->boutton10.image->w;
	menu->boutton10.pos_button.h = menu->boutton10.image->h;
	menu->boutton10.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_vs(menu* menu)
{
		menu->boutton8.image = IMG_Load ("sound_e.png");
	menu->boutton8.pos_button.x = 308;
	menu->boutton8.pos_button.y = 123;
	menu->boutton8.pos_button.w = menu->boutton8.image->w;
	menu->boutton8.pos_button.h = menu->boutton8.image->h;
	menu->boutton8.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_vs2(menu* menu)
{
		menu->boutton9.image = IMG_Load ("sound_e1.png");
	menu->boutton9.pos_button.x = 308;
	menu->boutton9.pos_button.y = 123;
	menu->boutton9.pos_button.w = menu->boutton9.image->w;
	menu->boutton9.pos_button.h = menu->boutton9.image->h;
	menu->boutton9.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_5(menu* menu)
{
		menu->boutton5.image = IMG_Load ("fulls.png");
	menu->boutton5.pos_button.x = 353;
	menu->boutton5.pos_button.y = 265;
	menu->boutton5.pos_button.w = menu->boutton5.image->w;
	menu->boutton5.pos_button.h = menu->boutton5.image->h;
	menu->boutton5.son=Mix_LoadWAV("soundevent.wav");
}

void init_buttons_5v(menu* menu)
{
		menu->boutton11.image = IMG_Load ("fulls1.png");
	menu->boutton11.pos_button.x = 353;
	menu->boutton11.pos_button.y = 265;
	menu->boutton11.pos_button.w = menu->boutton11.image->w;
	menu->boutton11.pos_button.h = menu->boutton11.image->h;
	
}
void init_buttons_l(menu* menu)
{
		menu->boutton12.image = IMG_Load ("language.png");
	menu->boutton12.pos_button.x = 353;
	menu->boutton12.pos_button.y = 350;
	menu->boutton12.pos_button.w = menu->boutton12.image->w;
	menu->boutton12.pos_button.h = menu->boutton12.image->h;
	menu->boutton12.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_lv(menu* menu)
{
		menu->boutton13.image = IMG_Load ("language1.png");
	menu->boutton13.pos_button.x = 353;
	menu->boutton13.pos_button.y = 350;
	menu->boutton13.pos_button.w = menu->boutton13.image->w;
	menu->boutton13.pos_button.h = menu->boutton13.image->h;
	
}

void init_buttons_is(menu* menu)
{
		menu->boutton6.image = IMG_Load ("increaseson.png");
	menu->boutton6.pos_button.x = 587;
	menu->boutton6.pos_button.y = 122;
	menu->boutton6.pos_button.w = menu->boutton6.image->w;
	menu->boutton6.pos_button.h = menu->boutton6.image->h;
	
}
void init_buttons_14(menu* menu)
{
		menu->boutton14.image = IMG_Load ("increaseson_e.png");
	menu->boutton14.pos_button.x = 587;
	menu->boutton14.pos_button.y = 180;
	menu->boutton14.pos_button.w = menu->boutton14.image->w;
	menu->boutton14.pos_button.h = menu->boutton14.image->h;
	
}

void init_buttons_ds(menu* menu)
{
		menu->boutton7.image = IMG_Load ("dimson.png");
	menu->boutton7.pos_button.x = 350;
	menu->boutton7.pos_button.y = 123;
	menu->boutton7.pos_button.w = menu->boutton7.image->w;
	menu->boutton7.pos_button.h = menu->boutton7.image->h;
	
}
void init_buttons_15(menu* menu)
{
		menu->boutton15.image = IMG_Load ("dimson_e.png");
	menu->boutton15.pos_button.x = 350;
	menu->boutton15.pos_button.y = 180;
	menu->boutton15.pos_button.w = menu->boutton15.image->w;
	menu->boutton15.pos_button.h = menu->boutton15.image->h;
	
}

void init_buttons_v1(menu* menu)
{
		menu->bouttonv.image = IMG_Load ("start1.png");
	menu->bouttonv.pos_button.x = 700;
	menu->bouttonv.pos_button.y = 75;
	menu->bouttonv.pos_button.w = menu->bouttonv.image->w;
	menu->bouttonv.pos_button.h = menu->bouttonv.image->h;
	
}

void init_buttons_1(menu* menu)
{
		menu->boutton.image = IMG_Load ("start.png");
	menu->boutton.pos_button.x = 700;
	menu->boutton.pos_button.y = 75;
	menu->boutton.pos_button.w = menu->boutton.image->w;
	menu->boutton.pos_button.h = menu->boutton.image->h;
	menu->boutton.son=Mix_LoadWAV("soundevent.wav");
	
}
void init_buttons_2(menu* menu)
{
		menu->boutton2.image = IMG_Load ("settings.png");
	menu->boutton2.pos_button.x = 700;
	menu->boutton2.pos_button.y = 175;
	menu->boutton2.pos_button.w = menu->boutton2.image->w;
	menu->boutton2.pos_button.h = menu->boutton2.image->h;
	menu->boutton2.son=Mix_LoadWAV("soundevent.wav");
}
void init_buttons_v2(menu* menu)
{
		menu->bouttonv2.image = IMG_Load ("settings1.png");
	menu->bouttonv2.pos_button.x = 700;
	menu->bouttonv2.pos_button.y = 175;
	menu->bouttonv2.pos_button.w = menu->bouttonv2.image->w;
	menu->bouttonv2.pos_button.h = menu->bouttonv2.image->h;
	
}
void init_buttons_3(menu* menu)
{
		menu->boutton3.image = IMG_Load ("exit.png");
	menu->boutton3.pos_button.x = 700;
	menu->boutton3.pos_button.y = 275;
	menu->boutton3.pos_button.w = menu->boutton3.image->w;
	menu->boutton3.pos_button.h = menu->boutton3.image->h;
	menu->boutton3.son=Mix_LoadWAV("soundevent.wav");
}


void affichage_b(menu* menu,int* e2,int* d2,int* a1,int* l,int* m,int* m1,int* k,int* mv,int* mv1)
{
	
	
	if((*e2)==0){

	SDL_BlitSurface(menu->back.image, NULL, menu->back.ecran, &menu->back.posecranimg);
	menu->boutton.pos_button.x = 700;
	menu->boutton.pos_button.y = 75;
	menu->boutton.pos_button.w = menu->boutton.image->w;
	menu->boutton.pos_button.h = menu->boutton.image->h;
	menu->bouttonv.pos_button.x = 700;
	menu->bouttonv.pos_button.y = 75;
	menu->bouttonv.pos_button.w = menu->bouttonv.image->w;
	menu->bouttonv.pos_button.h = menu->bouttonv.image->h;
	
	if((*d2)==0)
	{
	SDL_BlitSurface(menu->boutton.image, NULL, menu->back.ecran, &menu->boutton.pos_button);
	SDL_BlitSurface(menu->boutton2.image, NULL, menu->back.ecran, &menu->boutton2.pos_button); 	
	SDL_BlitSurface(menu->boutton3.image, NULL, menu->back.ecran, &menu->boutton3.pos_button);
	(*d2)=1;
	}
	
	switch(*a1)
	{
	case 0:
	SDL_BlitSurface(menu->boutton.image, NULL, menu->back.ecran, &menu->boutton.pos_button);
	SDL_BlitSurface(menu->boutton2.image, NULL, menu->back.ecran, &menu->boutton2.pos_button); 	
	SDL_BlitSurface(menu->boutton3.image, NULL, menu->back.ecran, &menu->boutton3.pos_button);
	
	break;
	case 1:
	
	SDL_BlitSurface(menu->bouttonv.image, NULL, menu->back.ecran, &menu->bouttonv.pos_button);
	SDL_BlitSurface(menu->boutton2.image, NULL, menu->back.ecran, &menu->boutton2.pos_button); 	
	SDL_BlitSurface(menu->boutton3.image, NULL, menu->back.ecran, &menu->boutton3.pos_button);
	
	break;
 	case 2:
	
	SDL_BlitSurface(menu->boutton.image, NULL, menu->back.ecran, &menu->boutton.pos_button);
	SDL_BlitSurface(menu->bouttonv2.image, NULL, menu->back.ecran, &menu->bouttonv2.pos_button); 	
	SDL_BlitSurface(menu->boutton3.image, NULL, menu->back.ecran, &menu->boutton3.pos_button);
	break;
	case 3:
	
	SDL_BlitSurface(menu->boutton.image, NULL, menu->back.ecran, &menu->boutton.pos_button);
	SDL_BlitSurface(menu->boutton2.image, NULL, menu->back.ecran, &menu->boutton2.pos_button); 	
	SDL_BlitSurface(menu->bouttonv3.image, NULL, menu->back.ecran, &menu->bouttonv3.pos_button);
	break; 
	}
	switch(*l)
	{
	case 0:
	
	menu->txt.texte = TTF_RenderText_Solid(menu->txt.police, "play ",menu->txt.couleur);
       
        menu->txt2.texte = TTF_RenderText_Solid(menu->txt2.police, "settings ",menu->txt2.couleur);
        
        menu->txt3.texte = TTF_RenderText_Solid(menu->txt3.police, "exit ",menu->txt3.couleur);
        
        SDL_BlitSurface(menu->txt.texte, NULL,menu->back.ecran,&menu->txt.posecrantxt);
        SDL_BlitSurface(menu->txt2.texte, NULL,menu->back.ecran,&menu->txt2.posecrantxt);
        SDL_BlitSurface(menu->txt3.texte, NULL,menu->back.ecran,&menu->txt3.posecrantxt);
        
         break;
        case 1: 
        
	menu->txt.texte = TTF_RenderText_Solid(menu->txt.police, "jouer ",menu->txt.couleur);
        
        menu->txt2.texte = TTF_RenderText_Solid(menu->txt2.police, "options ",menu->txt2.couleur);
       
        menu->txt3.texte = TTF_RenderText_Solid(menu->txt3.police, "quitter ",menu->txt3.couleur);
        SDL_BlitSurface(menu->txt.texte, NULL,menu->back.ecran,&menu->txt.posecrantxt);
        SDL_BlitSurface(menu->txt2.texte, NULL,menu->back.ecran,&menu->txt2.posecrantxt);
         SDL_BlitSurface(menu->txt3.texte, NULL,menu->back.ecran,&menu->txt3.posecrantxt);
         break;
        }
        
        }
        else if((*e2)==1)
        {
        menu->boutton.pos_button.x = 353;
	menu->boutton.pos_button.y = 420;
	menu->boutton.pos_button.w = menu->boutton.image->w;
	menu->boutton.pos_button.h = menu->boutton.image->h;
        menu->bouttonv.pos_button.x = 353;
	menu->bouttonv.pos_button.y = 420;
	menu->bouttonv.pos_button.w = menu->bouttonv.image->w;
	menu->bouttonv.pos_button.h = menu->bouttonv.image->h;
	
	
	
        SDL_BlitSurface(menu->back.image, NULL, menu->back.ecran, &menu->back.posecranimg);
         if((*a1)==5)
          	SDL_BlitSurface(menu->boutton11.image, NULL, menu->back.ecran, &menu->boutton11.pos_button);
          else
          	SDL_BlitSurface(menu->boutton5.image, NULL, menu->back.ecran, &menu->boutton5.pos_button);
          if((*a1)==8)
          	SDL_BlitSurface(menu->boutton13.image, NULL, menu->back.ecran, &menu->boutton13.pos_button);
          else
          	SDL_BlitSurface(menu->boutton12.image, NULL, menu->back.ecran, &menu->boutton12.pos_button);
          
          
        if((*m)==0)
        	SDL_BlitSurface(menu->boutton8.image, NULL, menu->back.ecran, &menu->boutton8.pos_button);
        else if((*m)==1)
        	SDL_BlitSurface(menu->boutton9.image, NULL, menu->back.ecran, &menu->boutton9.pos_button);
       SDL_BlitSurface(menu->boutton6.image, NULL, menu->back.ecran, &menu->boutton6.pos_button);
        SDL_BlitSurface(menu->boutton7.image, NULL, menu->back.ecran, &menu->boutton7.pos_button);
        SDL_BlitSurface(menu->boutton14.image, NULL, menu->back.ecran, &menu->boutton14.pos_button);
        SDL_BlitSurface(menu->boutton15.image, NULL, menu->back.ecran, &menu->boutton15.pos_button);
        if(((*m1)==0))
        SDL_BlitSurface(menu->boutton4.image, NULL, menu->back.ecran, &menu->boutton4.pos_button);
        
        else if(((*m1)==1))
        SDL_BlitSurface(menu->boutton10.image, NULL, menu->back.ecran, &menu->boutton10.pos_button);
        
        
        	SDL_BlitSurface(menu->boutton.image, NULL, menu->back.ecran, &menu->boutton.pos_button);
        if((*a1)==1)
        	SDL_BlitSurface(menu->bouttonv.image, NULL, menu->back.ecran, &menu->bouttonv.pos_button);
        if((*l)==0)   
	{
	menu->txt.texte = TTF_RenderText_Solid(menu->txt.police, "sound ",menu->txt.couleur);
      
      menu->txt7.texte = TTF_RenderText_Solid(menu->txt7.police, "anglais",menu->txt7.couleur);
        
        menu->txt2.texte = TTF_RenderText_Solid(menu->txt2.police, "settings ",menu->txt2.couleur);
       
        menu->txt3.texte = TTF_RenderText_Solid(menu->txt3.police, "back ",menu->txt3.couleur);
        
        menu->txt8.texte = TTF_RenderText_Solid(menu->txt8.police, "language ",menu->txt8.couleur);
        if((*k)==1)
        	menu->txt9.texte = TTF_RenderText_Solid(menu->txt9.police, "fullscreen ",menu->txt9.couleur);
        else if((*k)==0)
        	menu->txt9.texte = TTF_RenderText_Solid(menu->txt9.police, "windowed ",menu->txt9.couleur);
        
        menu->txt4.texte = TTF_RenderText_Solid(menu->txt4.police, "mode ",menu->txt4.couleur);
        		
        }
        else
        {
        menu->txt.texte = TTF_RenderText_Solid(menu->txt.police, "son ",menu->txt.couleur);
        
        menu->txt2.texte = TTF_RenderText_Solid(menu->txt2.police, "options",menu->txt2.couleur);
       
        
        menu->txt3.texte = TTF_RenderText_Solid(menu->txt3.police, "retourner ",menu->txt3.couleur);
        
        menu->txt7.texte = TTF_RenderText_Solid(menu->txt7.police, "francais ",menu->txt7.couleur);
        
        menu->txt4.texte = TTF_RenderText_Solid(menu->txt4.police, "mode ",menu->txt4.couleur);
        menu->txt8.texte = TTF_RenderText_Solid(menu->txt8.police, "langue ",menu->txt8.couleur);
        if((*k)==1)
        	menu->txt9.texte = TTF_RenderText_Solid(menu->txt9.police, "plein ecran ",menu->txt9.couleur);
        else if((*k)==0)
        	menu->txt9.texte = TTF_RenderText_Solid(menu->txt9.police, "fenetre ",menu->txt9.couleur);
        }
        switch(*mv)
       	{
       	case 100:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "100 ",menu->txt5.couleur);
       		break;
        case 80:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "80 ",menu->txt5.couleur);
       		break;
       	case 60:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "60 ",menu->txt5.couleur);
       		break;
       	case 40:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "40 ",menu->txt5.couleur);
       		break;
       	case 20:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "20 ",menu->txt5.couleur);
       		break;
       	case 0:
       		menu->txt5.texte = TTF_RenderText_Solid(menu->txt5.police, "0 ",menu->txt5.couleur);
       		break;
       	}
       	switch(*mv1)
       	{
       	case 100:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "100 ",menu->txt6.couleur);
       		break;
        case 80:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "80 ",menu->txt6.couleur);
       		break;
       	case 60:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "60 ",menu->txt6.couleur);
       		break;
       	case 40:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "40 ",menu->txt6.couleur);
       		break;
       	case 20:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "20 ",menu->txt6.couleur);
       		break;
       	case 0:
       		menu->txt6.texte = TTF_RenderText_Solid(menu->txt6.police, "0 ",menu->txt6.couleur);
       		break;
       	}
        SDL_BlitSurface(menu->txt4.texte, NULL,menu->back.ecran,&menu->txt4.posecrantxt);
         SDL_BlitSurface(menu->txt2.texte, NULL,menu->back.ecran,&menu->txt2.posecrantxt);
         SDL_BlitSurface(menu->txt3.texte, NULL,menu->back.ecran,&menu->txt3.posecrantxt);
          SDL_BlitSurface(menu->txt.texte, NULL,menu->back.ecran,&menu->txt.posecrantxt);
          SDL_BlitSurface(menu->txt5.texte, NULL,menu->back.ecran,&menu->txt5.posecrantxt);
          SDL_BlitSurface(menu->txt6.texte, NULL,menu->back.ecran,&menu->txt6.posecrantxt);
          SDL_BlitSurface(menu->txt7.texte, NULL,menu->back.ecran,&menu->txt7.posecrantxt);
          SDL_BlitSurface(menu->txt8.texte, NULL,menu->back.ecran,&menu->txt8.posecrantxt);
          SDL_BlitSurface(menu->txt9.texte, NULL,menu->back.ecran,&menu->txt9.posecrantxt);
         
        }
        
         
}
	void fonction_event(menu* menu,SDL_Event *event,int *quitter,enum MenuState *currentState,int *e2,int *d,int* d2,int* l,int* m,int* mv,int* m1,int* mv1,int* k,int* a1,int* a2,int* d1)
{
int x,y;
switch (event->type)
         { 
		case SDL_QUIT:
				*quitter = 0;
        		break;
        	case SDL_KEYDOWN:
        		switch(event->key.keysym.sym) 
        	{ 
        		case SDLK_ESCAPE:
        		if((*e2)==0)  
        			*quitter =0;
        		else if((*e2)==1)
        			{*currentState = MAIN_MENU;
        			(*d)=0;}
        		else if((*e2)==2)
        			{*currentState = MAIN_MENU;
        			(*d)=0;
        			}
        		
        		break;
        		case SDLK_o: 
        		if(*currentState==MAIN_MENU) 
        		{
        			*currentState = OPTIONS_MENU;
        			(*d2)=0;
        			}
        		break;
        		case SDLK_l: 
        		if((*l)==0)
        			(*l)=1;
        		else
        			(*l)=0;
        		SDL_Delay(120);
        		break;
        		case SDLK_j:
        			if(*currentState==MAIN_MENU) 
        				{*currentState = GAME;
        				/*(*d)=1;
        				(*d1)=0;*/
        				}
        		break;
        		case SDLK_t:
        			if(*currentState==MAIN_MENU) 
        				{*currentState = TIC;
        				/*(*d)=1;
        				(*d1)=0;*/
        				}
        		break;
        		case SDLK_m:
        			if((*m)==0)
        				{
        				Mix_VolumeMusic(0);
        			
        				(*m)=1;
        				
        				
        				}
        			else if((*m)==1)
        			{
        			Mix_VolumeMusic(*mv);	
        			(*m)=0;
        			}
        			SDL_Delay(160);
        			break;	
        			case SDLK_e:
        			if((*m1)==0)
        				{
        				
        				Mix_VolumeChunk(menu->boutton.son,0);
        				Mix_VolumeChunk(menu->boutton2.son,0);
        				Mix_VolumeChunk(menu->boutton3.son,0);
        				(*m1)=1;
        				}
        			else if((*m1)==1)
        			{
        			
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			(*m1)=0;
        			
        			
        			}
        			SDL_Delay(160);
        			break;	
        			
        			
        			case SDLK_f:
        			if((*k)==0)
        				{
        				
        				(*k)=1;
        				
        				}
        			else if((*k)==1)
        			{
        				(*k)=0;
        			}
        			SDL_WM_ToggleFullScreen(menu->back.ecran);
        			break;
        			case SDLK_KP_PLUS:
        			if(((*mv)<100)&&((*m)!=1)&&((*e2)==1))
        			{
        			
        			(*mv)=(*mv)+20;
        			Mix_VolumeMusic(*mv);
        			}
         			SDL_Delay(120);
         			
        			break;
        			case SDLK_KP_MINUS:
        			if(((*mv)>0)&&((*m)!=1)&&((*e2)==1))
        			{
        			
        			(*mv)=(*mv)-20;
        			Mix_VolumeMusic(*mv);
        			}
        			SDL_Delay(120); 
        			break;
        			case SDLK_EQUALS:
        			if(((*m)!=1)&&((*mv1)<100)&&((*e2)==1))
        			{
        			(*mv1)=(*mv1)+20;
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			}
         			SDL_Delay(120);
        			break;
        			case SDLK_MINUS:
        			if(((*m)!=1)&&((*mv1)>0)&&((*e2)==1))
        			{
        			(*mv1)=(*mv1)-20;
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			}
        			SDL_Delay(120); 
        			break;
        			case SDLK_UP:
        			if((*e2)==0){
        			if((*a1)==0)
        				{
        				(*a2)=1;
        				(*a1)=1;
        				}
        			else if((*a1)==1)
        				{(*a2)=1;
        				(*a1)=3;
        				}
        			else if((*a1)==2)
        				{(*a2)=1;
        				(*a1)=1;}
        			else if((*a1)==3)
        				{(*a2)=1;
        				(*a1)=2;}
        			SDL_Delay(120);
        			}
        			break;
        			case SDLK_DOWN:
        			if((*e2)==0){
        			if((*a1)==0)
        				{
        				(*a2)=1;
        				(*a1)=3;
        				}
        			else if((*a1)==1)
        				{(*a2)=1;
        				(*a1)=2;
        				}
        			else if((*a1)==2)
        				{(*a2)=3;
        				(*a1)=3;}
        			else if((*a1)==3)
        				{(*a2)=1;
        				(*a1)=1;}
        				
        			SDL_Delay(120);
        			}
        			break;
        			case SDLK_RETURN:
        			if(((*a1)==2)&&((*a2)!=0))
        				*currentState = OPTIONS_MENU;
        			else if(((*a1)==1)&&((*a2)!=0))
        				*currentState = GAME;
        			else if(((*a1)==3)&&((*a2)!=0))
        				*quitter = 0;
        				
        			
        			break;
        			
        			
        	}
        	break;
        	case SDL_MOUSEMOTION:
        		x=event->motion.x;
        		y=event->motion.y;
        		if((x>menu->boutton.pos_button.x && x<menu->boutton.pos_button.x+menu->boutton.pos_button.w && y>menu->boutton.pos_button.y && y<menu->boutton.pos_button.y+menu->boutton.pos_button.h))
        			{
        			(*a2)=0;
        			(*a1)=1;
        			
        			}
        		else if((x>menu->boutton2.pos_button.x && x<menu->boutton2.pos_button.x+menu->boutton2.pos_button.w && y>menu->boutton2.pos_button.y && y<menu->boutton2.pos_button.y+menu->boutton2.pos_button.h))
        			
        			{
        			(*a2)=0;
        			(*a1)=2;
        			}
        			
        			
        		else if((x>menu->boutton3.pos_button.x && x<menu->boutton3.pos_button.x+menu->boutton3.pos_button.w && y>menu->boutton3.pos_button.y && y<menu->boutton3.pos_button.y+menu->boutton3.pos_button.h))
        			{
        			
        			(*a1)=3;
        			(*a2)=0;
        			}
        			
        		else if((x>menu->boutton8.pos_button.x && x<menu->boutton8.pos_button.x+menu->boutton8.pos_button.w && y>menu->boutton8.pos_button.y && y<menu->boutton8.pos_button.y+menu->boutton8.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=4;
        		}
        		else if((x>menu->boutton5.pos_button.x && x<menu->boutton5.pos_button.x+menu->boutton5.pos_button.w && y>menu->boutton5.pos_button.y && y<menu->boutton5.pos_button.y+menu->boutton5.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=5;
        		}
        		else if((x>menu->boutton12.pos_button.x && x<menu->boutton12.pos_button.x+menu->boutton12.pos_button.w && y>menu->boutton12.pos_button.y && y<menu->boutton12.pos_button.y+menu->boutton12.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=8;
        		}
        		else if((x>menu->boutton6.pos_button.x && x<menu->boutton6.pos_button.x+menu->boutton6.pos_button.w && y>menu->boutton6.pos_button.y && y<menu->boutton6.pos_button.y+menu->boutton6.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=6;
        			
        		}
        		else if((x>menu->boutton7.pos_button.x && x<menu->boutton7.pos_button.x+menu->boutton7.pos_button.w && y>menu->boutton7.pos_button.y && y<menu->boutton7.pos_button.y+menu->boutton7.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=7;
        			
        		}
        		else if((x>menu->boutton4.pos_button.x && x<menu->boutton4.pos_button.x+menu->boutton4.pos_button.w && y>menu->boutton4.pos_button.y && y<menu->boutton4.pos_button.y+menu->boutton4.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=9;
        			
        		}
        		else if((x>menu->boutton14.pos_button.x && x<menu->boutton14.pos_button.x+menu->boutton14.pos_button.w && y>menu->boutton14.pos_button.y && y<menu->boutton14.pos_button.y+menu->boutton14.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=10;
        			
        		}
        		else if((x>menu->boutton15.pos_button.x && x<menu->boutton15.pos_button.x+menu->boutton15.pos_button.w && y>menu->boutton15.pos_button.y && y<menu->boutton15.pos_button.y+menu->boutton15.pos_button.h)&&((*e2)==1))
        		{
        			(*a1)=11;
        			
        		}
        		
        		
        		else 
        			{(*a1)=0;
        			}
        		break;
        		case SDL_MOUSEBUTTONDOWN:
         		if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==3) && ((*e2)==0)&&((*a2)==0)) 
         			{*quitter=0;}
         		
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==2)&&((*a2)==0))
         		{
         			*currentState = OPTIONS_MENU;
         			(*d2)=0;
         		}
         		
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==1) && (*currentState == OPTIONS_MENU))
         		{
         			*currentState = MAIN_MENU;
         			
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==1) && (*currentState == GAME))
         		{
         			*currentState = MAIN_MENU;
         			SDL_FreeSurface(menu->back.image);
         			(*d)=0;
         			(*d1)=1;
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==6) && ((*e2)==1))
         		{
         			
        			if(((*mv)<100)&&((*m)!=1))
        			{
        			
        			(*mv)=(*mv)+20;
        			Mix_VolumeMusic(*mv);
        			
        			}
         		SDL_Delay(120);
         			
         			
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==10) && ((*e2)==1))
         		{
         			
        			if(((*mv1)<100)&&((*m1)!=1))
        			{
        			(*mv1)=(*mv1)+20;
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			}
         		SDL_Delay(120);
         			
         			
         		}
         		
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==8) && ((*e2)==1)) 
         		{
        		if((*l)==0)
        			(*l)=1;
        		else
        			(*l)=0;
        		SDL_Delay(120);
        		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==7) && ((*e2)==1))
         		{

         			
        			if(((*mv)>0)&&((*m)!=1))
        			{
        			
        			(*mv)=(*mv)-20;
        			Mix_VolumeMusic(*mv);
        			
        			}
        			SDL_Delay(120);      			
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==11) && ((*e2)==1))
         		{

         			
        			if(((*mv1)>0)&&((*m1)!=1))
        			{
        			(*mv1)=(*mv1)-20;
        			
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        		 
        		 
        		  	Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			}
        			SDL_Delay(120);      			
         		}
         		
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==1) && (*currentState == MAIN_MENU)&&((*a2)==0))
         		{
         			*currentState = GAME;
         			
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==5)&&((*e2)==1))
         		{
         			if((*k)==0)
        				{
        				
        				(*k)=1;
        				}
        			else if((*k)==1)
        			{
        				(*k)=0;
        			}
        			SDL_WM_ToggleFullScreen(menu->back.ecran);
        			
         			SDL_Delay(120);
         			
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==4)&&((*e2)==1))
         		{
         			if((*m)==0)
        				{
        				Mix_VolumeMusic(0);
        				(*m)=1;
        				
        				}
        			else if((*m)==1)
        			{
        			
        			Mix_VolumeMusic(*mv);
        			
        			(*m)=0;
        			}
        			
         			SDL_Delay(120);
         		}
         		else if((event->button.button == SDL_BUTTON_LEFT) && ((*a1)==9)&&((*e2)==1))
         		{
         			if((*m1)==0)
        				{
        			Mix_VolumeChunk(menu->boutton.son,0);
        			Mix_VolumeChunk(menu->boutton2.son,0);
        			Mix_VolumeChunk(menu->boutton3.son,0);
        				(*m1)=1;
        				
        				}
        			else if((*m1)==1)
        			{
        			Mix_VolumeChunk(menu->boutton.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton2.son,(*mv1));
        			Mix_VolumeChunk(menu->boutton3.son,(*mv1));
        			(*m1)=0;
        			
        			}
        			
         			SDL_Delay(120);
         		}
         		      	
	 		break;
        	}
        	
}
void update_menu(menu* menu,enum MenuState currentState,int *e1,int* a1,int* d1,int* d,int* e2,int* k)
{
        	switch (currentState) {
       case MAIN_MENU:
        (*e2)=0;
        if((*d)==0)
        {
        if((*d1)==1)
        {

        menu->back.musique = Mix_LoadMUS("music.mp3");
        Mix_PlayMusic(menu->back.musique, -1);
         (*d1)=0;
        }
        
        SDL_FreeSurface(menu->back.image);
	init_back(menu,k,e2);
         (*d)=1;
        }
switch(*a1)
{
case 0:
	 (*e1)=0;
	break;
case 1:
	
	if(((*e1)==0)&&((*a1)==1))
		{Mix_PlayChannel(-1,menu->boutton.son,0);
			 (*e1)=1;}
	break;
case 2:
	
	if(((*e1)==0)&&((*a1)==2))
		{
		Mix_PlayChannel(-1,menu->boutton2.son,0);
			 (*e1)=1;}

	
	break;
case 3:
	
	if(((*e1)==0)&&((*a1)==3))
		{
		Mix_PlayChannel(-1,menu->boutton3.son,0);
		 (*e1)=1;
			}
	

	
	break;
}
break;
	case OPTIONS_MENU:
	(*e2)=1;
	if( (*a1)==0)
	{
	 (*e1)=0;
	}
	if((*d)==1)
	{
	SDL_FreeSurface(menu->back.image);
	init_back(menu,k,e2);
	 (*d)=0;
	}
	if(((*e1)==0)&&((*a1)==1))
		{
		Mix_PlayChannel(-1,menu->boutton.son,0);
		 (*e1)=1;
		}
		else if(((*e1)==0)&&((*a1)==8))
		{
		Mix_PlayChannel(-1,menu->boutton.son,0);
		 (*e1)=1;
		}
		else if(((*e1)==0)&&((*a1)==5))
		{
		Mix_PlayChannel(-1,menu->boutton.son,0);
		 (*e1)=1;
		}
		break;
	case GAME:
	 (*e2)=2;
	if(((*d)==1)&&((*d1)==0))
	{
	SDL_FreeSurface(menu->back.image);
	init_back(menu,k,e2);
	//Mix_VolumeMusic(*mv);
	
	(*d1)=1;
	 (*d)=0;
	}

	break;
	case TIC:
	(*e2)=3;
	if(((*d)==1)&&((*d1)==0))
	{
	SDL_FreeSurface(menu->back.image);
	init_back(menu,k,e2);
	(*d1)=1;
	 (*d)=0;
	}

	break;
	
}


}
void draw_frame(int frame_num, SDL_Surface* screen)
{
    char bmpframe[96];  
    sprintf(bmpframe, "frame menu background/frame%03d.bmp", frame_num);  
    SDL_Surface* frame = SDL_LoadBMP(bmpframe);
    if (!frame) {
        printf("Failed to load frame %d: %s\n", frame_num, SDL_GetError());
        return;
    }
    SDL_BlitSurface(frame, NULL, screen, NULL);
    SDL_FreeSurface(frame);
}
void wait_frame(void)
{
    static Uint32 next_frame_time = 0;
    Uint32 current_time = SDL_GetTicks();
    if (next_frame_time > current_time) {
        SDL_Delay(next_frame_time - current_time);
    }
    next_frame_time = current_time + FRAME_DELAY;
}

void liberer(menu menu)
{
	SDL_Quit();
	SDL_FreeSurface(menu.back.image);
	
	SDL_FreeSurface(menu.boutton.image);
	SDL_FreeSurface(menu.boutton2.image);
	SDL_FreeSurface(menu.boutton3.image);
	SDL_FreeSurface(menu.bouttonv.image);
	SDL_FreeSurface(menu.bouttonv2.image);
	SDL_FreeSurface(menu.bouttonv3.image);
	SDL_FreeSurface(menu.boutton4.image);
	SDL_FreeSurface(menu.boutton5.image);
	SDL_FreeSurface(menu.boutton8.image);
	SDL_FreeSurface(menu.boutton6.image);
	SDL_FreeSurface(menu.boutton9.image);
	SDL_FreeSurface(menu.boutton7.image);
	SDL_FreeSurface(menu.boutton10.image);
	SDL_FreeSurface(menu.boutton12.image);
	SDL_FreeSurface(menu.boutton11.image);
	SDL_FreeSurface(menu.boutton13.image);
	SDL_FreeSurface(menu.boutton14.image);
	SDL_FreeSurface(menu.boutton15.image);
	SDL_FreeSurface(menu.txt.texte);
	TTF_CloseFont (menu.txt.police);
	SDL_FreeSurface(menu.txt2.texte);
	TTF_CloseFont (menu.txt2.police);
	SDL_FreeSurface(menu.txt5.texte);
	TTF_CloseFont (menu.txt5.police);
	SDL_FreeSurface(menu.txt3.texte);
	TTF_CloseFont (menu.txt3.police);
	SDL_FreeSurface(menu.txt4.texte);
	TTF_CloseFont (menu.txt4.police);
	SDL_FreeSurface(menu.txt6.texte);
	TTF_CloseFont (menu.txt6.police);
	SDL_FreeSurface(menu.txt7.texte);
	TTF_CloseFont (menu.txt7.police);
	SDL_FreeSurface(menu.txt8.texte);
	TTF_CloseFont (menu.txt8.police);
	SDL_FreeSurface(menu.txt9.texte);
	TTF_CloseFont (menu.txt9.police);
	TTF_Quit();
	Mix_FreeMusic(menu.back.musique);
	Mix_CloseAudio();
	Mix_FreeChunk(menu.boutton.son);
	Mix_FreeChunk(menu.boutton2.son);
	Mix_FreeChunk(menu.boutton3.son);
}











void initback(background_g *b)
{

b->background_pos1.x=0;
b->background_pos1.y=0;
b->background_pos2.x=550;
b->background_pos2.y=0;
b->posSprite.x=0;
b->posSprite.y=0;
b->background1 = IMG_Load("background_level.png");
b->background2 = IMG_Load("background_level.png");
b->sprite = IMG_Load("crow.png");
b->music_type=0;
b->num_s=1;
b->camera_pos1.h=850;
b->camera_pos1.w=1100;
b->camera_pos1.x=0;
b->camera_pos1.y=200;
b->dead=0;
b->collect=0;
b->camera_pos2.h=850;
b->camera_pos2.w=550;
b->camera_pos2.x=550;
b->camera_pos2.y=200;
b->pos.x=0;
b->pos.y=150;
b->pos2.x=550;
b->pos2.y=150;
b->posSprite.h=b->sprite->h;
b->posSprite.w=59;

    b->music[1] = Mix_LoadMUS("Game.mp3");
    b->music[2] = Mix_LoadMUS("ominous.mp3");
    b->attack_sound = Mix_LoadWAV("attack.wav");
    b->saut_sound = Mix_LoadWAV("saut.wav");

    // number of lives and stage
    b->nb_vie = 3;
    b->stage = 4;
}

void afficherback2(background_g b,SDL_Surface *screen)
{
SDL_BlitSurface(b.background2, &(b.camera_pos2), screen, &b.background_pos2);
    SDL_BlitSurface(b.sprite, &(b.posSprite), screen, &b.pos2);
    SDL_BlitSurface(b.ground21.image, NULL, screen, &b.ground21.pos);
    SDL_BlitSurface(b.ground22.image, NULL, screen, &b.ground22.pos);
    SDL_BlitSurface(b.ground23.image, NULL, screen, &b.ground23.pos);
    SDL_BlitSurface(b.ground24.image, NULL, screen, &b.ground24.pos);
    SDL_BlitSurface(b.ground25.image, NULL, screen, &b.ground25.pos);
    SDL_BlitSurface(b.ground26.image, NULL, screen, &b.ground26.pos);
    SDL_BlitSurface(b.ground27.image, NULL, screen, &b.ground27.pos);
    SDL_BlitSurface(b.ground28.image, NULL, screen, &b.ground28.pos);
    SDL_BlitSurface(b.ground29.image, NULL, screen, &b.ground29.pos);
    SDL_BlitSurface(b.ground210.image, NULL, screen, &b.ground210.pos);
    SDL_BlitSurface(b.ground211.image, NULL, screen, &b.ground211.pos);
    SDL_BlitSurface(b.ground212.image, NULL, screen, &b.ground212.pos);
    SDL_BlitSurface(b.ground213.image, NULL, screen, &b.ground213.pos);


}

void afficherback(background_g b,SDL_Surface *screen)
{

    SDL_BlitSurface(b.background1, &(b.camera_pos1), screen, &b.background_pos1);
    SDL_BlitSurface(b.sprite, &(b.posSprite), screen, &b.pos);
    SDL_BlitSurface(b.ground.image, NULL, screen, &b.ground.pos);
    SDL_BlitSurface(b.ground2.image, NULL, screen, &b.ground2.pos);
    SDL_BlitSurface(b.ground3.image, NULL, screen, &b.ground3.pos);
    SDL_BlitSurface(b.ground4.image, NULL, screen, &b.ground4.pos);
    SDL_BlitSurface(b.ground5.image, NULL, screen, &b.ground5.pos);
    SDL_BlitSurface(b.ground6.image, NULL, screen, &b.ground6.pos);
    SDL_BlitSurface(b.ground7.image, NULL, screen, &b.ground7.pos);
    SDL_BlitSurface(b.ground8.image, NULL, screen, &b.ground8.pos);
    SDL_BlitSurface(b.ground9.image, NULL, screen, &b.ground9.pos);
    SDL_BlitSurface(b.ground10.image, NULL, screen, &b.ground10.pos);
    SDL_BlitSurface(b.ground11.image, NULL, screen, &b.ground11.pos);
    SDL_BlitSurface(b.ground12.image, NULL, screen, &b.ground12.pos);
    SDL_BlitSurface(b.ground13.image, NULL, screen, &b.ground13.pos);
   
    
    
    
        
}




void scrolling1(background_g *b,int direction, int pas)
{

    int max_x =4715 - 1100;
     b->max_y = 950 - 700;
 
    if(direction==0)
    {
    {
        b->camera_pos1.x += pas;
        
        b->ground.pos.x-=pas;
        b->ground2.pos.x-=pas;
        b->ground3.pos.x-=pas;
        b->ground4.pos.x-=pas;
        b->ground5.pos.x-=pas;
        b->ground6.pos.x-=pas;
        b->ground7.pos.x-=pas;
        b->ground8.pos.x-=pas;
        b->ground9.pos.x-=pas;
        b->ground10.pos.x-=pas;
        b->ground11.pos.x-=pas;
        b->ground12.pos.x-=pas;
        b->ground13.pos.x-=pas;
        
        }
        if(b->camera_pos1.x > max_x)
            b->camera_pos1.x = max_x;
			    
                       
                        
                       
    }

    if(direction==1)
    {
        b->camera_pos1.x -= pas;
        b->ground.pos.x+=pas;
        b->ground2.pos.x+=pas;
        b->ground3.pos.x+=pas;
        b->ground4.pos.x+=pas;
        b->ground5.pos.x+=pas;
        b->ground6.pos.x+=pas;
        b->ground7.pos.x+=pas;
        b->ground8.pos.x+=pas;
        b->ground9.pos.x+=pas;
        b->ground10.pos.x+=pas;
        b->ground11.pos.x+=pas;
        b->ground12.pos.x+=pas;
        b->ground13.pos.x+=pas;
        if(b->camera_pos1.x < 0)
            b->camera_pos1.x = 0;
        
            
          
    }

    if(direction==2)
    {

        b->camera_pos1.y += pas; 
        
        if(b->camera_pos1.y > b->max_y)
            b->camera_pos1.y = b->max_y;
            
            if(b->camera_pos1.y!=b->max_y)
       		{
       		b->pos.y-=pas;
    		b->ground.pos.y-=pas;
        b->ground2.pos.y-=pas;
        b->ground3.pos.y-=pas;
        b->ground4.pos.y-=pas;
        b->ground5.pos.y-=pas;
        b->ground6.pos.y-=pas;
        b->ground7.pos.y-=pas;
        b->ground8.pos.y-=pas;
        b->ground9.pos.y-=pas;
        b->ground10.pos.y-=pas;
        b->ground11.pos.y-=pas;
        b->ground12.pos.y-=pas;
        b->ground13.pos.y-=pas; 
    		}
    }

    if(direction==3)
    {
    	 
        b->camera_pos1.y -= pas;
        
        if(b->camera_pos1.y < 0)
            b->camera_pos1.y = 0;
            
       if(b->camera_pos1.y!=0)
       		{
       		b->pos.y+=pas;
       		b->ground.pos.y+=pas;
        b->ground2.pos.y+=pas;
        b->ground3.pos.y+=pas;
        b->ground4.pos.y+=pas;
        b->ground5.pos.y+=pas;
        b->ground6.pos.y+=pas;
        b->ground7.pos.y+=pas;
        b->ground8.pos.y+=pas;
        b->ground9.pos.y+=pas;
        b->ground10.pos.y+=pas;
        b->ground11.pos.y+=pas;
        b->ground12.pos.y+=pas;
        b->ground13.pos.y+=pas; 
       		}
    }
    
    if(direction==4)
    {
        b->camera_pos2.x += pas;
        if(b->camera_pos2.x > max_x)
            b->camera_pos2.x = max_x;
    }

    if(direction==5)
    {
        b->camera_pos2.x -= pas;
        if(b->camera_pos2.x < 0)
            b->camera_pos2.x = 0;
    }

    if(direction==6)
    {
        b->camera_pos2.y += pas; 
        if(b->camera_pos2.y > b->max_y)
            b->camera_pos2.y = b->max_y;
            
            if(b->camera_pos2.y!=b->max_y)
       		b->pos2.y-=pas;
    }

    if(direction==7)
    {
        b->camera_pos2.y -= pas; 
        if(b->camera_pos2.y < 0)
            b->camera_pos2.y = 0;
            
	if(b->camera_pos2.y!=0)
       		b->pos2.y+=pas;
    }
    

       		
}



void animerback(background_g *b)
{
    static int i = 0;
    i=i+2;
    static int time=0;
    
	if(time<2000)
{
    time+=1;
    if(b->num_s==1)
    	b->pos.x+=2;
    else
    	{
    	b->pos.x+=2;    		
    	b->pos2.x+=2;
	   	
    	}

    if(i == 10)
    {
	      b->posSprite.x+=59;
    }
    else if(i == 20)
    {
                b->posSprite.x+=59;
    }
    else if(i == 30)
    {
        b->posSprite.x+=59;
    }
    else if( i == 40)
    {
        b->posSprite.x+=59;
    }
    else if( i ==50)
    {
        b->posSprite.x+=59;
    }
    else if(i==60)
    {
               b->posSprite.x+=59;
    }
    else if(i==70)
    {
      		b->posSprite.x+=59;
    }
    else if(i==80)
    {
                b->posSprite.x+=59;
    }
    else if(i==90)
    		{
    		b->posSprite.x=0;
    		i=0;
    		}
   }
   else
   {
   	time=0;
   	b->pos.x=0;
   	b->pos2.x=550;
   }

}


void initialiser_image_Best(background_g *image)
{
image->img=IMG_Load("bestscore.png");
image->pos.x=700;
image->pos.y=45;
}


void afficherboutonBest(background_g image, SDL_Surface *screen)
{
SDL_BlitSurface(image.img,NULL,screen,&image.pos); // ?????
}


void saveScore(personnage s, char *fileName) 
{
    FILE *f = fopen(fileName, "a");
    fprintf(f, "%d  %s\n", s.score, s.name);
    fclose(f);
}


int compareScores(const void *score1, const void *score2) {
    ScoreInfo *s1 = (ScoreInfo *)score1;
    ScoreInfo *s2 = (ScoreInfo *)score2;
     
        return (s2->score - s1->score);
    
}


void bestScores(char *fileName, ScoreInfo topScores[]) {
int MAX_SCORES=3;
    FILE *f = fopen(fileName, "r");
    ScoreInfo scores[MAX_SCORES];
    int numScores = 0;


    while (fscanf(f, "%d %s \n", &scores[numScores].score, scores[numScores].playerName) == 3) {
        numScores++;
        if (numScores == MAX_SCORES) {
            break;
        }
    }

    fclose(f);

    qsort(scores, numScores, sizeof(ScoreInfo), compareScores);//tri

    int i;
    for (i = 0; i < 3 && i < numScores; i++) {
        topScores[i] = scores[i];
    }
}

void initialiser_texte(TTF_Font *font, SDL_Color color, char *text, SDL_Surface **surface, SDL_Rect *position) {
    *surface = TTF_RenderText_Blended(font, text, color);
    position->w = (*surface)->w;
    position->h = (*surface)->h;
}


void afficherBest(SDL_Surface *screen, ScoreInfo topScores[]) {
    TTF_Font *font = TTF_OpenFont("arial.ttf", 29);
    SDL_Color color = { 0, 0, 0 };
    char text[50];
    SDL_Surface *surface;
    SDL_Rect position;

    position.x = 50;
    position.y = 50;
    sprintf(text, "Meilleurs scores :");
    initialiser_texte(font, color, text, &surface, &position);

    int i;
    for (i = 0; i < 3; i++) {
	SDL_BlitSurface(surface, NULL, screen, &position);
        position.x = 50;
        position.y = 100 + i * 50;
        sprintf(text, "%d. %s - Score : %d - Temps : %d", i + 1, topScores[i].playerName, topScores[i].score, topScores[i].time);
        initialiser_texte(font, color, text, &surface, &position);
         SDL_BlitSurface(surface, NULL, screen, &position);
    }

    SDL_FreeSurface(surface);
    TTF_CloseFont(font);
}


void renderText(SDL_Surface *screen, TTF_Font *font, SDL_Color color, char *text, int x, int y)
{
    SDL_Rect pos;
    pos.x = x;
    pos.y = y;

    SDL_Surface *textSurface = TTF_RenderText_Blended(font, text, color);

    SDL_BlitSurface(textSurface, NULL, screen, &pos);
}
void init_enigme(enigme *e)
{
    int i, w;

    e->p.x = 0;
    e->p.y = 0;
    e->img = NULL;

    e->animation.SpriteSheet = IMG_Load("clock.png");
    e->animation.ClipLoaded = 0;
    e->animation.pos.x = 50;
    e->animation.pos.y = 0;
    e->animation.frames = 12;

    for (i = 0, w = 0; i < e->animation.frames; i++, w = w + 72)
    {
        e->animation.Clips[i].w = 70;
        e->animation.Clips[i].h = 70;
        e->animation.Clips[i].x = w;
        e->animation.Clips[i].y = 0;
    }
}

void generate_enigme(SDL_Surface *screen, enigme *e, int *alea)
{
    int test = *alea;

    FILE *f;
    f = fopen("enigme.txt", "r");

    do
    {
        *alea = rand() % 3; // generate a random number from 0 to 2 example rand()%8 => 0->7
    } while (*alea == test);

    int i = 0;
    char image[30];

    while (fscanf(f, "%s %d\n", image, &(*e).reponse) != EOF && i != *alea) // bich to93od dima ta9ra fil fichier "f" tou9of wa9ta ta9a End Of FIle wala i=alea
        i++;

    e->img = IMG_Load(image);

    SDL_FillRect(screen, NULL, 0x00000); // SDL_FillRect bich torsom rectangle

    SDL_BlitSurface(e->img, NULL, screen, &(e->p));
}

int resolution(SDL_Surface *screen, enigme e, int startTime)
{
    SDL_Event event;
    int r = 0;
    int run = 1;
    while (run)
    {
        int time = (SDL_GetTicks() / 1000) - startTime;

        switch (time)
        {
        case 1:
            e.animation.ClipLoaded = 1;
            break;
        case 4:
            e.animation.ClipLoaded = 2;
            break;
        case 7:
            e.animation.ClipLoaded = 3;
            break;
        case 10:
            e.animation.ClipLoaded = 4;
            break;
        case 13:
            e.animation.ClipLoaded = 5;
            break;
        case 16:
            e.animation.ClipLoaded = 6;
            break;
        case 19:
            e.animation.ClipLoaded = 7;
            break;
        case 22:
            e.animation.ClipLoaded = 8;
            break;
        case 25:
            e.animation.ClipLoaded = 9;
            break;
        case 28:
            e.animation.ClipLoaded =10;
            break;
        case 31:
            e.animation.ClipLoaded = 11;
            break;
        case 34:
            e.animation.ClipLoaded = 12;
            break;
        case 35:
            return -1;
            break;
        }

        SDL_FillRect(screen, NULL, 0x00000);
        SDL_BlitSurface(e.img, NULL, screen, &e.p);
        SDL_BlitSurface(e.animation.SpriteSheet, &e.animation.Clips[e.animation.ClipLoaded], screen, &e.animation.pos);
      SDL_Flip(screen);
        SDL_PollEvent(&event);
        switch (event.type)
        {
        

        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                r = -1;
             
                break;
           
            case SDLK_a:
                r = 1;
                run = 0;
                break;
            case SDLK_b:
                r = 2;
                run = 0;
                break;
            case SDLK_c:
                r = 3;
                run = 0;
                break;
            }
            break;
        }
    }

    return r;
}

void afficher_resultat(SDL_Surface *screen, int r, enigme *en)
{
    TTF_Font *font = NULL;
    font = TTF_OpenFont("Retro.ttf", 40);

    SDL_Color textColor = {255, 0, 0};

    SDL_FillRect(screen, NULL, 0x00000);
    if (r == 1)
    {
        renderText(screen, font, textColor, "YOU WIN!", 0, 0);
    }
    else
    {
        renderText(screen, font, textColor, "YOU LOSE!", 0, 0);
    }
   
    
}


void renderTime(SDL_Surface*screen,TTF_Font*font,Uint32 startTime)
{
    Uint32 currentTime=SDL_GetTicks();
    Uint32 elapsedTime=(currentTime-startTime)/1000;

    char timeText[32];
    snprintf(timeText,sizeof(timeText),"Time: %d seconds",elapsedTime);

    SDL_Color color={0,0,0};
    
    

    SDL_Surface*textSurface=TTF_RenderText_Solid(font,timeText,color);
    if (textSurface==NULL) 
    {
        fprintf(stderr,"erreur SDL_ttf: %s\n",TTF_GetError());
        return;
    }
    
    SDL_Rect renderQuad={10,10,textSurface->w,textSurface->h};
    SDL_BlitSurface(textSurface,NULL,screen,&renderQuad);
    SDL_FreeSurface(textSurface);
    
}



void initPerso(personnage *p)
{
	p->save=0;
	p->x=-1;
	char name[10]="Emma";
        strcpy(p->name,name);
	p->sprite=IMG_Load ("sprite_emma_f.png");
	p->posSprite.x=0;
	p->posSprite.y=0;
	p->posSprite.w=63;
	p->posSprite.h=130;
	p->viesprite=IMG_Load ("life .png");
	p->posvieSprite.x=0;
	p->posvieSprite.y=0;
	p->posvieSprite.w=186;
	p->posvieSprite.h=63;
	p->direction=0;
	p->posScreen.y=400;
	p->posScreen.x=100;
	p->posvie.y=0;
	p->posvie.x=809;
	p->vitesse=8;
	p->acceleration=0;
	p->score=0;
	p->attack=0;
	p->up=2;
	p->vie=3;
	p->death=0;
	p->maxy=p->posScreen.y-70;
	p->is_up=0;
	p->is_running=0;  
	p->scoretxt.posecrantxt.x=(1070);
	p->scoretxt.posecrantxt.y=(10);
        p->scoretxt.couleur.r=0;
        p->scoretxt.couleur.g=0;
        p->scoretxt.couleur.b=0;
        p->scoretxt.police = TTF_OpenFont ("arial.ttf", 20);
        p->txt.posecrantxt.x=(1000);
	p->txt.posecrantxt.y=(10);
        p->txt.couleur.r=0;
        p->txt.couleur.g=0;
        p->collision=0;
        p->txt.couleur.b=0;
        p->txt.police = TTF_OpenFont ("arial.ttf", 20);
}
void initPerso2(personnage *p)
{
	char name[10]="Emma";
        strcpy(p->name,name);
	p->sprite=IMG_Load ("sprite_emma_f.png");
	p->posSprite.x=0;
	p->score=0;
	p->posSprite.y=0;
	p->posSprite.w=72;
	p->posSprite.h=130;
	p->viesprite=IMG_Load ("life .png");
	p->posvieSprite.x=0;
	p->posvieSprite.y=0;
	p->posvieSprite.w=186;
	p->posvieSprite.h=63;
	p->direction=0;
	p->posScreen.y=400;
	p->posScreen.x=600;
	p->posvie.y=0;
	p->posvie.x=809;
	p->vitesse=10;
	p->acceleration=0;
	p->attack=0;
	p->up=2;
	p->vie=3;
	p->death=0;
	p->maxy=p->posScreen.y-70;
	p->is_up=0;
	p->is_running=0;  
	p->scoretxt.posecrantxt.x=(1070);
	p->scoretxt.posecrantxt.y=(10);
        p->scoretxt.couleur.r=0;
        p->scoretxt.couleur.g=0;
        p->scoretxt.couleur.b=0;
        p->scoretxt.police = TTF_OpenFont ("arial.ttf", 20);
        p->txt.posecrantxt.x=(1000);
	p->txt.posecrantxt.y=(10);
        p->txt.couleur.r=0;
        p->txt.couleur.g=0;
        p->collision=0;
        p->txt.couleur.b=0;
        p->txt.police = TTF_OpenFont ("arial.ttf", 20);
}
	
void animationperso2(personnage *p)
{
	static int i=0;
if(p->direction==0)
{
if(p->up!=2)
{
p->posSprite.y=271;
p->posSprite.x=70;
i=0;
}
else if((p->vie!=0)&&(p->acceleration!=0))
{
	p->posSprite.y=0;
	
	i=i+1;
	if((p->posSprite.x==160)&&(i>=15))
	{
		p->posSprite.x =0;
		i=0;
		}
	else
		{
		if((i==5))
			p->posSprite.x =80;
		else if((i==10))
			p->posSprite.x =160;
			
		}
}

else if((p->attack==1))
{
p->posSprite.y=414;
i=i+1;
if((p->posSprite.x==80)&&(i>3))
	{
	p->attack=0;
	i=0;
		}
else if((i==2))
		{
			p->posSprite.x =80;
		}



}
else if((p->acceleration==0)&&(p->attack==0))
	{
	p->posSprite.y=414;
	p->posSprite.x =0;
	i=0;
	}		
}
else
{
if(p->up!=2)
{
p->posSprite.y=271;
p->posSprite.x=0;
i=0;
}
else if((p->vie!=0)&&(p->acceleration!=0))
{


	
	p->posSprite.y=135;
	i=i+1;
	if((p->posSprite.x==0)&&(i>=15))
	{
		p->posSprite.x =160;
		i=0;
		}
	else
		{
		if((i>=5)&&(i<10))
			p->posSprite.x =72;
		else if((i>=10)&&(i<15))
			p->posSprite.x =0;
		}
	
}
else if((p->attack==1))
{
p->posSprite.y=545;
i=i+1;
if((p->posSprite.x==0)&&(i>3))
	{
	p->attack=0;
	i=0;
		}
else if((i==2))
		{
			p->posSprite.x =0;
		}



}
else if((p->acceleration==0))
	{
	p->posSprite.y=545;
	p->posSprite.x =91;
	i=0;
	}

}

if(p->vie==3)
	p->posvieSprite.x =0;
else if(p->vie==2)
	p->posvieSprite.x =63;
else
	p->posvieSprite.x =126;
	
}

void animationperso(personnage *p)
{
	static int i=0;
	
if(p->direction==0)
{
if(p->up!=2)
{
p->posSprite.y=271;
p->posSprite.x=70;
i=0;
}
else if((p->vie!=0)&&(p->acceleration!=0))
{
	p->posSprite.y=0;
	
	i=i+1;
	if((p->posSprite.x==160)&&(i>=15))
	{
		p->posSprite.x =0;
		i=0;
		}
	else
		{
		if((i==5))
			p->posSprite.x =80;
		else if((i==10))
			p->posSprite.x =160;
			
		}
}
else if((p->attack==1))
{
p->posSprite.y=414;
i=i+1;
if((p->posSprite.x==80)&&(i>3))
	{
	p->attack=0;
	i=0;
		}
else if((i==2))
		{
			p->posSprite.x =80;
		}



}
else if((p->acceleration==0)&&(p->attack==0))
	{
	p->posSprite.y=414;
	p->posSprite.x =0;
	i=0;
	}		
}
else
{
if(p->up!=2)
{
p->posSprite.y=271;
p->posSprite.x=0;
i=0;
}
else if((p->vie!=0)&&(p->acceleration!=0))
{


	
	p->posSprite.y=135;
	i=i+1;
	if((p->posSprite.x==0)&&(i>=15))
	{
		p->posSprite.x =160;
		i=0;
		}
	else
		{
		if((i>=5)&&(i<10))
			p->posSprite.x =72;
		else if((i>=10)&&(i<15))
			p->posSprite.x =0;
		}
	
}
else if((p->attack==1))
{
p->posSprite.y=545;
i=i+1;
if((p->posSprite.x==0)&&(i>3))
	{
	p->attack=0;
	i=0;
		}
else if((i==2))
		{
			p->posSprite.x =0;
		}



}
else if((p->acceleration==0))
	{
	p->posSprite.y=545;
	p->posSprite.x =91;
	i=0;
	}

}

if(p->vie==3)
	p->posvieSprite.x =0;
else if(p->vie==2)
	p->posvieSprite.x =63;
else
	p->posvieSprite.x =126;
	
}

void character_mouvement(personnage *p)
{
if(p->vie!=0)
       {
       if((p->is_running==1))
        	{
        	p->acceleration+=1;
        	if((p->direction==0)&&(p->posScreen.x<550))
        	{
      		
        	 if(p->acceleration<p->vitesse)
        		{
        			
        				p->posScreen.x+=p->acceleration;
        		}
        	else
        		{
        		p->posScreen.x+=p->vitesse;
        		p->acceleration-=1;
        		}
        	
        	}
        	else if(p->direction==1)
        	{
        	
        	 
        	 if(p->acceleration<p->vitesse)
        		{
        		p->posScreen.x-=p->acceleration;
        		}
        	else
        		{
        		p->posScreen.x-=p->vitesse;
        		p->acceleration-=1;
        		}
        	
        	}
        	}
        else if(p->is_running==0)
        	{
        	p->acceleration-=1;
        	if((p->acceleration>0)&&(p->posScreen.x<480))
        		{
        		if(p->direction==1)
        			p->posScreen.x-=p->acceleration;
        		else if(p->direction==0)
        			p->posScreen.x+=p->acceleration;
        		}
        	else
        		p->acceleration=0;
        	}
        	jump(p);	
        
       
        	}
        else
        {
        
        		p->acceleration=0;
        		p->posScreen.x-=130;
        	
        		p->vie=3;

	}
}

void jump(personnage *p)
{
	

if(p->up==1)
        	{
        	if(p->posScreen.y>p->maxy)
        		p->posScreen.y-=10;
        	else if((p->posScreen.y<=p->maxy))
        		p->up=0;
        		
        	}
else if(p->up==0)
       	 	{
       	 	if(p->collision!=1)
       	 		p->posScreen.y+=10;
       	 	else if(p->collision==1)
       	 		{
       	 		p->up=2;
       	 		p->is_up=0;
       	 		}
        	}

}

void character_mouvement_2(personnage *p)
{
if(p->vie!=0)
       {
       if((p->is_running==1))
        	{
        	p->acceleration+=1;
        	if((p->direction==0)&&(p->posScreen.x<1100))
        	{
      		
        	 if(p->acceleration<p->vitesse)
        		{
        			
        				p->posScreen.x+=p->acceleration;
        		}
        	else
        		{
        		p->posScreen.x+=p->vitesse;
        		p->acceleration-=1;
        		}
        	
        	}
        	else if((p->direction==1)&&(p->posScreen.x>570))
        	{
        	
        	 
        	 if(p->acceleration<p->vitesse)
        		{
        		p->posScreen.x-=p->acceleration;
        		}
        	else
        		{
        		p->posScreen.x-=p->vitesse;
        		p->acceleration-=1;
        		}
        	
        	}
        	}
        else if(p->is_running==0)
        	{
        	p->acceleration-=1;
        	if((p->acceleration>0)&&(p->posScreen.x<1100))
        		{
        		if((p->direction==1)&&(p->posScreen.x>570))
        			p->posScreen.x-=p->acceleration;
        		else if(p->direction==0)
        			p->posScreen.x+=p->acceleration;
        		}
        	else
        		p->acceleration=0;
        	}
        	jump2(p);	
        
       
        	}
        else
        {
        
        		p->acceleration=0;
        		p->posScreen.x-=100;
        	
        		p->vie=3;

	}
}

void jump2(personnage *p)
{
	

if(p->up==1)
        	{
        	if(p->posScreen.y>p->maxy)
        		p->posScreen.y-=10;
        	else if((p->posScreen.y<=p->maxy))
        		p->up=0;
        		
        	}
else if(p->up==0)
       	 	{
       	 	if(p->collision!=1)
       	 		p->posScreen.y+=10;
       	 	else if(p->collision==1)
       	 		{
       	 		p->up=2;
       	 		p->is_up=0;
       	 		}
        	}

}

void afficherPerso(personnage *p,SDL_Surface *ecran)
{	
	char score[20];
	sprintf(score, "%d", p->score);

	SDL_BlitSurface(p->sprite, &p->posSprite, ecran, &p->posScreen);
	SDL_BlitSurface(p->viesprite, &p->posvieSprite, ecran, &p->posvie);
	p->scoretxt.texte = TTF_RenderText_Solid(p->scoretxt.police, score,p->scoretxt.couleur);
	p->txt.texte = TTF_RenderText_Solid(p->txt.police, "score:",p->txt.couleur);
        SDL_BlitSurface(p->scoretxt.texte, NULL,ecran,&p->scoretxt.posecrantxt);
        SDL_BlitSurface(p->txt.texte, NULL,ecran,&p->txt.posecrantxt);
}
void afficherPerso2(personnage *p,SDL_Surface *ecran)
{	
	char score[20];
	sprintf(score, "%d", p->score);

	SDL_BlitSurface(p->sprite, &p->posSprite, ecran, &p->posScreen);
	SDL_BlitSurface(p->viesprite, &p->posvieSprite, ecran, &p->posvie);
	p->scoretxt.texte = TTF_RenderText_Solid(p->scoretxt.police, score,p->scoretxt.couleur);
	p->txt.texte = TTF_RenderText_Solid(p->txt.police, "score:",p->txt.couleur);
        SDL_BlitSurface(p->scoretxt.texte, NULL,ecran,&p->scoretxt.posecrantxt);
        SDL_BlitSurface(p->txt.texte, NULL,ecran,&p->txt.posecrantxt);
}


void init_es(ES *p)
{
 (*p).d=0;
 (*p).pos.x = 510;
 (*p).pos.y = 460;
 (*p).image = IMG_Load("image.png");
 (*p).pos.w = (*p).image -> w;
 (*p).pos.h = (*p).image -> h;
}
void init_ground(ES *g,ES *g2,ES *g3,ES *g4,ES *g5,ES *g6,ES *g7,ES *g8,ES *g9,ES *g10,ES *g11,ES *g12,ES *g13)
{
 (*g).d=0;
 (*g).pos.x = 0;
 (*g).pos.y = 570;
 (*g).image = IMG_Load("ground.png");
 (*g).pos.w = (*g).image -> w;
 (*g).pos.h = (*g).image -> h;
 
 (*g2).pos.x = (*g).pos.x+805;
 (*g2).pos.y = 500;
 (*g2).image = IMG_Load("ground7.png");
 (*g2).pos.w = (*g2).image -> w;
 (*g2).pos.h = (*g2).image -> h;
 
 (*g3).pos.x = (*g2).pos.x+186+50;
 (*g3).pos.y = 450;
 (*g3).image = IMG_Load("ground7.png");
 (*g3).pos.w = (*g3).image -> w;
 (*g3).pos.h = (*g3).image -> h;
 
 (*g4).pos.x = (*g3).pos.x+50+184;
 (*g4).pos.y = 400;
 (*g4).image = IMG_Load("ground7.png");
 (*g4).pos.w = (*g4).image -> w;
 (*g4).pos.h = (*g4).image -> h;
 
 (*g5).pos.x = (*g4).pos.x+184+50;
 (*g5).pos.y = 400;
 (*g5).image = IMG_Load("ground6.png");
 (*g5).pos.w = (*g5).image -> w;
 (*g5).pos.h = (*g5).image -> h;
 
 (*g6).pos.x = (*g5).pos.x+185+50;
 (*g6).pos.y = 400;
 (*g6).image = IMG_Load("ground7.png");
 (*g6).pos.w = (*g6).image -> w;
 (*g6).pos.h = (*g6).image -> h;
 
 (*g7).pos.x = (*g6).pos.x+184+40;
 (*g7).pos.y = 550;
 (*g7).image = IMG_Load("ground4.png");
 (*g7).pos.w = (*g7).image -> w;
 (*g7).pos.h = (*g7).image -> h;
 
 (*g8).pos.x = (*g7).pos.x+497+50;
 (*g8).pos.y = 500;
 (*g8).image = IMG_Load("ground6.png");
 (*g8).pos.w = (*g8).image -> w;
 (*g8).pos.h = (*g8).image -> h;
 
 (*g9).pos.x = (*g8).pos.x+185+50;
 (*g9).pos.y = 450;
 (*g9).image = IMG_Load("ground6.png");
 (*g9).pos.w = (*g9).image -> w;
 (*g9).pos.h = (*g9).image -> h;
 
 (*g10).pos.x = (*g9).pos.x+185+50;
 (*g10).pos.y = 450;
 (*g10).image = IMG_Load("ground6.png");
 (*g10).pos.w = (*g10).image -> w;
 (*g10).pos.h = (*g10).image -> h;
 
 (*g11).pos.x = (*g10).pos.x+185+50;
 (*g11).pos.y = 470;
 (*g11).image = IMG_Load("ground4.png");
 (*g11).pos.w = (*g11).image -> w;
 (*g11).pos.h = (*g11).image -> h;
 
 (*g12).pos.x = (*g11).pos.x+396;
 (*g12).pos.y = 333;
 (*g12).image = IMG_Load("ground3.png");
 (*g12).pos.w = (*g12).image -> w;
 (*g12).pos.h = (*g12).image -> h;
 
 (*g13).pos.x = (*g12).pos.x;
 (*g13).pos.y = 333;
 (*g13).image = IMG_Load("ground2.png");
 (*g13).pos.w = (*g13).image -> w;
 (*g13).pos.h = (*g13).image -> h;
}
void init_bonus(ES *p)
{
 (*p).d=0;
 (*p).pos.x =2200;
 (*p).pos.y = 500;
 (*p).image = IMG_Load("bonus.png");
 (*p).pos.w = (*p).image -> w;
 (*p).pos.h = (*p).image -> h;
}


void init_ground_2(ES *g,ES *g2,ES *g3,ES *g4,ES *g5,ES *g6,ES *g7,ES *g8,ES *g9,ES *g10,ES *g11,ES *g12,ES *g13)
{
 (*g).d=0;
 (*g).pos.x = 550;
 (*g).pos.y = 570;
 (*g).image = IMG_Load("ground.png");
 (*g).pos.w = (*g).image -> w;
 (*g).pos.h = (*g).image -> h;
 
 (*g2).pos.x = (*g).pos.x+805;
 (*g2).pos.y = 500;
 (*g2).image = IMG_Load("ground7.png");
 (*g2).pos.w = (*g2).image -> w;
 (*g2).pos.h = (*g2).image -> h;
 
 (*g3).pos.x = (*g2).pos.x+184+50;
 (*g3).pos.y = 450;
 (*g3).image = IMG_Load("ground7.png");
 (*g3).pos.w = (*g3).image -> w;
 (*g3).pos.h = (*g3).image -> h;
 
 (*g4).pos.x = (*g3).pos.x+50+184;
 (*g4).pos.y = 400;
 (*g4).image = IMG_Load("ground7.png");
 (*g4).pos.w = (*g4).image -> w;
 (*g4).pos.h = (*g4).image -> h;
 
 (*g5).pos.x = (*g4).pos.x+184+50;
 (*g5).pos.y = 400;
 (*g5).image = IMG_Load("ground6.png");
 (*g5).pos.w = (*g5).image -> w;
 (*g5).pos.h = (*g5).image -> h;
 
 (*g6).pos.x = (*g5).pos.x+185+50;
 (*g6).pos.y = 400;
 (*g6).image = IMG_Load("ground7.png");
 (*g6).pos.w = (*g6).image -> w;
 (*g6).pos.h = (*g6).image -> h;
 
 (*g7).pos.x = (*g6).pos.x+184+40;
 (*g7).pos.y = 550;
 (*g7).image = IMG_Load("ground4.png");
 (*g7).pos.w = (*g7).image -> w;
 (*g7).pos.h = (*g7).image -> h;
 
 (*g8).pos.x = (*g7).pos.x+497+50;
 (*g8).pos.y = 500;
 (*g8).image = IMG_Load("ground6.png");
 (*g8).pos.w = (*g8).image -> w;
 (*g8).pos.h = (*g8).image -> h;
 
 (*g9).pos.x = (*g8).pos.x+185+50;
 (*g9).pos.y = 450;
 (*g9).image = IMG_Load("ground6.png");
 (*g9).pos.w = (*g9).image -> w;
 (*g9).pos.h = (*g9).image -> h;
 
 (*g10).pos.x = (*g9).pos.x+185+50;
 (*g10).pos.y = 450;
 (*g10).image = IMG_Load("ground6.png");
 (*g10).pos.w = (*g10).image -> w;
 (*g10).pos.h = (*g10).image -> h;
 
 (*g11).pos.x = (*g10).pos.x+185+50;
 (*g11).pos.y = 470;
 (*g11).image = IMG_Load("ground4.png");
 (*g11).pos.w = (*g11).image -> w;
 (*g11).pos.h = (*g11).image -> h;
 
 (*g12).pos.x = (*g11).pos.x+396;
 (*g12).pos.y = 284;
 (*g12).image = IMG_Load("ground3.png");
 (*g12).pos.w = (*g12).image -> w;
 (*g12).pos.h = (*g12).image -> h;
 
 (*g13).pos.x = (*g12).pos.x;
 (*g13).pos.y = 220;
 (*g13).image = IMG_Load("ground2.png");
 (*g13).pos.w = (*g13).image -> w;
 (*g13).pos.h = (*g13).image -> h;
}


void afficher_es(ES p, SDL_Surface * ecran){
  SDL_BlitSurface(p.image, NULL, ecran, & p.pos);
}

void mouvement_aleatoire(ES *p)
{
if (( *p).pos.x %100==0) (*p).d=rand()%2;
if ((*p).pos.x<50) (*p).d=1;
if ((*p).pos.x>600) (*p).d=0;
if ((*p).d==0) 
	(*p).pos.x--;
else 
	(*p).pos.x++;
}

int collision(SDL_Rect E, SDL_Rect p)
{
    int collision;
    if (((p.x + p.w) < E.x)||(p.x > (E.x + E.w)) || ((p.y + p.h) < E.y) || (p.y > (E.y + E.h)))
    {
        collision = 0;
    }
    else
    {
        collision = 1;
    }
    return collision;
}

int collision_(SDL_Rect E, SDL_Rect p)
{
    int collision;
    if (((p.x + p.w-25) < E.x)||(p.x > (E.x + E.w)) || ((p.y + p.h) < E.y) || ((p.y+70) > (E.y )))
    {
        collision = 0;
    }
    else
    {
        collision = 1;
    }
    return collision;
}

int collision_2(SDL_Rect E, SDL_Rect p)
{
    int collision;
    if ((((p.x + p.w) >= E.x)&&(p.x<E.x)) && ((p.y + p.h-20) >= E.y) && ((p.y) <= (E.y +E.h)))
    {
        collision = 1;
    }
    
    else if ((p.x <= (E.x + E.w))&&((p.x+p.w)>E.x) && ((p.y + p.h-20) >= E.y) && ((p.y) <= (E.y +E.h)))
    {
        collision = 2;
    }
    else
    {
        collision = 0 ;
    }
    return collision;
}



int collision_trigo(SDL_Rect E,SDL_Rect p)
{
float D1,X1,X2,Y1,Y2,D2,R1,R2,R3,R4;
int collision;
X1=(p.x+(p.w/2));
X2=(E.x+(E.w/2));
Y1=(p.y+(p.h/2));
Y2=(E.y+(E.h/2));
R1=sqrt(pow((p.w/2),2)+pow((p.h/2),2));
R2=sqrt(pow((E.w/2),2)+pow((E.h/2),2));
if(p.w<p.h)
	R3=(p.w/2);
else
	R3=(p.h/2);

if(E.w<E.h)
	R4=(E.w/2);
else
	R4=(E.h/2);
	
D1=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
D2=R3+R4;

if(D1<=D2)
	collision=1;
else
	collision=0;

return(collision);

}

void deplacerIA(ES *E, SDL_Rect posperso)
{
    if (((E->pos.x - posperso.x) < 200) && ((E->pos.x - posperso.x) > 40))
    {
        E->d = 1;
        E->pos.x -= 2;
    }
    else if (((E->pos.x - posperso.x) < -80) && ((E->pos.x - posperso.x) > -200))
    {
        E->d = 0;
        E->pos.x += 2;
    }
    else if (((E->pos.x - posperso.x) <= 80) && ((E->pos.x - posperso.x) >= 0))
    {
        E->d = 3;
    } 
    else if (((E->pos.x - posperso.x) <= 0) && ((E->pos.x - posperso.x) >= -80))
    {
        E->d = 2;
    }
}



void events(int* e2,int* d,SDL_Event *event,int *quitter,personnage *p,personnage* p2,Uint32 t_prev,int *direction,background_g *b,int pas,int *donnee,int *score,int *answer,ScoreInfo topScores[],char *fileName,enum MenuState *currentState)
{
static int i=0;
static int j=0;

int n,s;
i=i+1;
if(j==30)
{
	p->score+=1;
	j=0;
	}
else
	j=j+1;

switch (event->type)
         { 
		case SDL_QUIT:
				*quitter = 1;
				*donnee=1;
				
        			break;
        	case SDL_KEYDOWN:
        		switch(event->key.keysym.sym) 
        	{
        		case SDLK_ESCAPE:
        			*donnee=1;
        			*e2=0;
        			*currentState = MAIN_MENU;
        			//(*d)=0;
        			saveScore(*p, fileName);
    				bestScores(fileName, topScores);
    				
    				save_game(*p,*b,"save_perso");
        			break;
        		case SDL_MOUSEBUTTONDOWN:
        		
                    if(event->button.button==SDL_BUTTON_LEFT)
                    {
                    	
                        int x=event->button.x;
                        int y=event->button.y;
                        if (x>=700 && x< 700 +150 && y>=45 && y<45 +33)
                        {
                        	if(*score==0)
                        		*score=1;
                        	else
                        		*score=0;

                        }
                        
                    }
                    break;
        		case SDLK_RIGHT:
        			if((p->vie!=0)&&(p->is_running==0))
        			{
        			*direction=1;
        			p->is_running=1;
        			if(p->direction==1)
        				{
        				p->direction=0;
					p->posSprite.x=160;
        				}
        			}
        			break;
        			
        		
        		case SDLK_LEFT:
        			if((p->vie!=0)&&(p->is_running==0))
        			{
        			*direction=0;
        			p->is_running=1;
        			if(p->direction==0)
        				{
        				p->direction=1;
				p->posSprite.x=0;
				
        				}
        			}
        				break;
        				case SDLK_m:
        			charger(p,b,"save_perso");
        				break;
        		case SDLK_DOWN:
                            *direction=2;


                            break;
        		case SDLK_UP:
        		if(p->vie!=0)
        		{	
        		if(p->up==2)
        				p->up=1;
        				
        		}
        			break;
        		case SDLK_d:
        		if((p2->vie!=0)&&(p2->is_running==0))
        			{
        			*direction=4;
        			p2->is_running=1;
        			if(p2->direction==1)
        				{
        				p2->direction=0;
					p2->posSprite.x=160;
        				}
        			}
                            break;
                       

                        case SDLK_q:
                        if((p2->vie!=0)&&(p2->is_running==0))
        			{
        			*direction=5;
        			p2->is_running=1;
        			if(p2->direction==0)
        				{
        				p2->direction=1;
				p2->posSprite.x=0;
				
        				}
        			}
                            break;

                        case SDLK_s:
                            *direction=6;
                            break;
                       case SDLK_z:
                       if(p2->vie!=0)
        		{	
        		if(p2->up==2)
        				p2->up=1;
        				
        		}

                            break;
                           case SDLK_n:
                    	    *answer=0;

                    	break;
                    	case SDLK_p:
                    	if(b->num_s==1)
                    	{b->num_s=2;
  			}
  			else
  			{
  			b->num_s=1;
  			}
  			SDL_Delay(50);
                    	  break;
                    case SDLK_f:
                   if(p->attack==0)
        		{
        		if((p->vie!=0)&&(p->acceleration==0))
        		{
        				p->attack=1;		
        		}
        		}
                        break;
                       case SDLK_a:
                   if(p2->attack==0)
        		{
        		if((p2->vie!=0)&&(p2->acceleration==0))
        		{
        				p2->attack=1;		
        		}
        		}
                        break;		
        			
        				
        	}
        	break;
        	case SDL_KEYUP:
        		switch(event->key.keysym.sym) 
        	{
        		case SDLK_d:
        		*direction=-1;
        			p2->is_running=0;
        			break;
        		case SDLK_RIGHT:
        			*direction=-1;
        			p->is_running=0;
        			break;
        		case SDLK_q:
        		*direction=-1;
        			p2->is_running=0;
        			break;
        		case SDLK_LEFT:
                        	*direction=-1;
        			p->is_running=0;
        			break;
        	    case SDLK_s:
                    case SDLK_DOWN:
                    *direction=-1;
                        break;
                    case SDLK_z:
                    case SDLK_UP:

                    *direction=-1;
                        break;
                   
                      
        	}
        	break;
        }
}


void affichage(SDL_Surface* screen,int* answer,enigme *e,background_g* b,personnage* p,personnage* p2,ES bonus,ES es1,SDL_Surface* minimapSurface,SDL_Surface* miniplayerSurface,SDL_Surface* minienemySurface2,SDL_Surface* minienemySurface,background_g bestscore,int miniplayerY,int miniplayerX,int minienemyX,int minienemyY,int minimapX,int minimapY,int collect,int dead,int* alea,TTF_Font* font)
 {
 static int i=0;
 animerback(b); 
    	afficherback(*b,screen);
    	afficherboutonBest(bestscore,screen);
    	        SDL_BlitSurface(minimapSurface,NULL, screen,&(SDL_Rect){minimapX,minimapY,0,0});
if(b->num_s>=1)
	{
	animationperso(p);
	afficherPerso(p,screen);
	}
		
	i+=1;
        if(i<10)
        {
        	SDL_BlitSurface(minienemySurface,NULL,screen,&(SDL_Rect){minienemyX,minienemyY,0,0});
        }
        else if((i>=10)&&(i<20))
        {
        	SDL_BlitSurface(minienemySurface2,NULL,screen,&(SDL_Rect){minienemyX,minienemyY,0,0});
        }
        else
        	i=0;
        SDL_BlitSurface(miniplayerSurface,NULL,screen,&(SDL_Rect){miniplayerX,miniplayerY,0,0});

        
        if(collect==0)
		{
		SDL_BlitSurface(bonus.image, NULL, screen, &bonus.pos);
		}
		
	if(dead==0)
		{
		  SDL_BlitSurface(es1.image, NULL, screen, & es1.pos);
		}

	if(b->num_s==2)
{
	afficherback2(*b,screen);
    	animationperso2(p2);
	afficherPerso2(p2,screen);

}
	renderTime(screen,font,0);  
	if(b->camera_pos1.x ==3615)
	{
	if(*answer==0)
	{
	Uint32 startTime = SDL_GetTicks() / 1000;
        generate_enigme(screen, e, alea);
        *answer = resolution(screen, *e, startTime);
	}
        if (*answer == e->reponse)
                afficher_resultat(screen, 1, e);
        else
                afficher_resultat(screen, -1, e);               
	}

 
 }

void mise_a_jour(int* minienemyX,ES* es1,background_g* b,personnage* p,personnage* p2,int* direction,ES* bonus,int* miniplayerX,int* miniplayerY,int* dead,int* collect,Uint32 elapsedTime,Uint32 frameTime,Uint32 frameStartTime,Uint32 startTime)
{
static int i2=0;
static int j=0;
static int x=0;
int c=0;

*minienemyX=es1->pos.x*MINIMAP_SCALE_X+100;

if((p->vie==1)&&(b->music_type==2))
	b->music_type=1;
else if((p->vie!=1)&&(b->music_type==3))
	b->music_type=0;
	
    if((b->music_type==1))
    {
    	Mix_CloseAudio();
    	Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
    	Mix_PlayMusic(b->music[2], -1);
    	b->music_type=3;
   }
   else if((b->music_type==0))
   	{
   	Mix_CloseAudio();
    	Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
   		Mix_PlayMusic(b->music[1], -1);
    	    b->music_type=2;
   	}
   	
    
if(b->camera_pos1.x==0)
{

	 
	 
if(p->up==0)
{
*direction=2;
        scrolling1(b,*direction,7);
        if(b->camera_pos1.y!=b->max_y)
        {es1->pos.y-=7;
	         bonus->pos.y-=7;}
}
else if(p->up==1)
	{*direction=3;
        scrolling1(b,*direction,7);
        if(b->camera_pos1.y!=0)
        {es1->pos.y+=7;
	bonus->pos.y+=7;
	}
        }
else if((p->direction==1))
	 {
	if((p->posScreen.x>=SCREEN_WIDTH/2-p->posSprite.w)&&(p->acceleration!=0))
	{
	 *direction=1;
	         scrolling1(b,*direction,7);
	         es1->pos.x+=7;
	         bonus->pos.x+=7;
	}
	         }
else if(p->direction==0)
		{
			if((p->posScreen.x>=SCREEN_WIDTH/2-p->posSprite.w)&&(p->acceleration!=0)){
		*direction=0;
	        scrolling1(b,*direction,7);
	        es1->pos.x-=7;
	        bonus->pos.x-=7;

	 	}
                 }              
}
else
{
if(p->acceleration!=0)
{
 if((p->direction==1))
	 {*direction=1;
	         scrolling1(b,*direction,7);
	         es1->pos.x+=7;
	         bonus->pos.x+=7;	         
	         }
else if(p->direction==0)
	{
	*direction=0;
	        scrolling1(b,*direction,7);
	        es1->pos.x-=7;
	         bonus->pos.x-=7;
	        }
 if(p->up==0)
{
*direction=2;
        scrolling1(b,*direction,7);
        if(b->camera_pos1.y!=b->max_y)
        {es1->pos.y-=7;
	         bonus->pos.y-=7;}
}
else if(p->up==1)
	{*direction=3;
        scrolling1(b,*direction,7);
        es1->pos.y+=7;
	         bonus->pos.y+=7;        
        }

	      
}
}
 
       
        	if((p->posScreen.x==SCREEN_WIDTH/2-p->posSprite.w))
        *miniplayerX=100+(b->camera_pos1.x*MINIMAP_SCALE_X+p->posScreen.x*MINIMAP_SCALE_X);
        else
        *miniplayerX=50+(b->camera_pos1.x*MINIMAP_SCALE_X+p->posScreen.x*MINIMAP_SCALE_X);
        *miniplayerY=(p->posScreen.y*MINIMAP_SCALE_Y);

        
        frameTime=SDL_GetTicks()-frameStartTime;
        elapsedTime=SDL_GetTicks()-startTime;   
                      
        if((collision_trigo(bonus->pos,p->posScreen)==1)&&(*collect==0))
	{
		(*collect=1);
       		p->score+=50;
       		
	}
	else if(collision(es1->pos,p->posScreen)==1)
	{
		j=j+1;
		if(p->attack==1)
			*dead=1;
		else if((j==8)&&(*dead==0))
			{p->vie-=1;
			j=0;
			if(p->score>10)
        	p->score-=10;
        	else
        		p->score=0;
			}	
		
	}
	
	
	if((collision_(b->ground4.pos,p->posScreen)==1)||(collision_(b->ground.pos,p->posScreen)==1)||(collision_(b->ground2.pos,p->posScreen)==1)||(collision_(b->ground3.pos,p->posScreen)==1)||(collision_(b->ground5.pos,p->posScreen)==1)||(collision_(b->ground6.pos,p->posScreen)==1)||(collision_(b->ground7.pos,p->posScreen)==1)||(collision_(b->ground8.pos,p->posScreen)==1)||(collision_(b->ground9.pos,p->posScreen)==1)||(collision_(b->ground10.pos,p->posScreen)==1)||(collision_(b->ground11.pos,p->posScreen)==1)||(collision_(b->ground12.pos,p->posScreen)==1)||(collision_(b->ground13.pos,p->posScreen)==1))
	{
	p->collision=1;
	}
	else
	p->collision=0;
	
	if((p->collision==0)&&(p->up==2))
		p->up=0;
		
	
	if((collision_2(b->ground4.pos,p->posScreen)==1)||(collision_2(b->ground.pos,p->posScreen)==1)||(collision_2(b->ground2.pos,p->posScreen)==1)||(collision_2(b->ground3.pos,p->posScreen)==1)||(collision_2(b->ground5.pos,p->posScreen)==1)||(collision_2(b->ground6.pos,p->posScreen)==1)||(collision_2(b->ground7.pos,p->posScreen)==1)||(collision_2(b->ground8.pos,p->posScreen)==1)||(collision_2(b->ground9.pos,p->posScreen)==1)||(collision_2(b->ground10.pos,p->posScreen)==1)||(collision_2(b->ground11.pos,p->posScreen)==1)||(collision_2(b->ground12.pos,p->posScreen)==1)||(collision_2(b->ground13.pos,p->posScreen)==1))
	{
	p->collision_r=1;
	}
	else if((collision_2(b->ground4.pos,p->posScreen)==2)||(collision_2(b->ground.pos,p->posScreen)==2)||(collision_2(b->ground2.pos,p->posScreen)==2)||(collision_2(b->ground3.pos,p->posScreen)==2)||(collision_2(b->ground5.pos,p->posScreen)==2)||(collision_2(b->ground6.pos,p->posScreen)==2)||(collision_2(b->ground7.pos,p->posScreen)==2)||(collision_2(b->ground8.pos,p->posScreen)==2)||(collision_2(b->ground9.pos,p->posScreen)==2)||(collision_2(b->ground10.pos,p->posScreen)==2)||(collision_2(b->ground11.pos,p->posScreen)==2)||(collision_2(b->ground12.pos,p->posScreen)==2)||(collision_2(b->ground13.pos,p->posScreen)==2))
	{
	p->collision_r=2;
	}
	else
	p->collision_r=0;
	
	if((p->collision_r==1)&&(p->direction==0))
		p->is_running=0;
	else if((p->collision_r==2)&&(p->direction==1))
		p->is_running=0;
		
	
	if((collision(b->ground21.pos,p2->posScreen)==1)||(collision(b->ground22.pos,p2->posScreen)==1)||(collision(b->ground23.pos,p2->posScreen)==1)||(collision(b->ground25.pos,p2->posScreen)==1)||(collision(b->ground26.pos,p2->posScreen)==1)||(collision(b->ground27.pos,p2->posScreen)==1)||(collision(b->ground28.pos,p2->posScreen)==1)||(collision(b->ground29.pos,p2->posScreen)==1)||(collision(b->ground210.pos,p2->posScreen)==1)||(collision(b->ground211.pos,p2->posScreen)==1)||(collision(b->ground212.pos,p2->posScreen)==1)||(collision(b->ground213.pos,p2->posScreen)==1)||(collision(b->ground24.pos,p2->posScreen)==1))
	{
	p2->collision=1;
	}
	else
	p2->collision=0;
	if((p2->collision==0)&&(p2->up==2))
		p2->up=0;
			
	deplacerIA(es1,p->posScreen);			
	mouvement_aleatoire(es1);
	if(x==15)
	{
		arduinoReadData(&(p->x));		   	
	x=0;
	}
	else
		x=x+1;

		switch(p->x)
		{
		case 1:
		
		if(p->vie!=0)
        		{	
        		if(p->up==2)
        				p->up=1;
        				
        		}
		break;
		case 2:
		p->direction=0;
		p->is_running=1;
		break;
		case 3:
		p->direction=1;
		p->is_running=1;
		break;
		case 4:
		p->attack=1;
		break;
		case 0:
		p->is_running=0;
		break;
		}
	
			
	if(i2==1)
	{
        character_mouvement(p);     
	if(b->num_s==2)
                character_mouvement_2(p2);     
        i2=0;
        }
        else
        	i2=i2+1;
        
        
       	if(p->up==2)
       		p->maxy=p->posScreen.y-70;
       	if(p2->up==2)
       		p2->maxy=p2->posScreen.y-70;
       		
       	if(p->posScreen.y>700)
       	{
       	init_ground(&b->ground,&b->ground2,&b->ground3,&b->ground4,&b->ground5,&b->ground6,&b->ground7,&b->ground8,&b->ground9,&b->ground10,&b->ground11,&b->ground12,&b->ground13);
       	initPerso(p);	
       	    init_es(es1);
       	   init_bonus(bonus);
       	b->camera_pos1.x=0;
       	b->camera_pos1.y=200;
       	
       	}
/*if(p->save==0)
{
charger(p,b,"save_perso");
p->save=1;
}*/	

}

void arduinoReadData(int* x)
{

    char chemin[]="/dev/ttyUSB0";
    FILE* f=NULL;
	int s=1;
    f=fopen(chemin,"r");
    if(f != NULL)
    {
    fscanf(f,"%d",x);        
    fclose(f);
}

}



void save_game(personnage p,background_g bg,char* nomfichier) 
{
	FILE *fichier;
	save s;
	s.p=p;
	s.bg=bg;
	fichier=fopen(nomfichier,"wb");
	if (fichier != NULL)
	{
	    fwrite(&s,sizeof(save),1,fichier);
	    printf("game saved\n");

	}
	else
	{
		printf("failed to save");
	}
	fclose(fichier);
}

void charger(personnage *p,background_g *bg,char* nomfichier)
{
    FILE *fichier;
    save s;
    
    fichier=fopen(nomfichier,"rb");
    fread(&s,sizeof(save),1,fichier);
    fclose(fichier);

    p->posScreen.x=s.p.posScreen.x;
    p->posScreen.y=s.p.posScreen.y;
    p->vie=s.p.vie;
    p->score=s.p.score;
    	
    	bg->collect=s.bg.collect;
    	bg->dead=s.bg.dead;
	bg->es1.pos.x=s.bg.es1.pos.x;
	bg->bonus.pos.x=s.bg.bonus.pos.x;
	bg->es1.pos.y=s.bg.es1.pos.y;
	bg->bonus.pos.y=s.bg.bonus.pos.y;
    bg->ground.pos.x=s.bg.ground.pos.x;
    bg->ground2.pos.x=s.bg.ground2.pos.x;
    bg->ground3.pos.x=s.bg.ground3.pos.x;
    bg->ground4.pos.x=s.bg.ground4.pos.x;
    bg->ground5.pos.x=s.bg.ground5.pos.x;
    bg->ground6.pos.x=s.bg.ground6.pos.x;
    bg->ground7.pos.x=s.bg.ground7.pos.x;
    bg->ground8.pos.x=s.bg.ground8.pos.x;
    bg->ground9.pos.x=s.bg.ground9.pos.x;
    bg->ground10.pos.x=s.bg.ground10.pos.x;
    bg->ground11.pos.x=s.bg.ground11.pos.x;
    bg->ground12.pos.x=s.bg.ground12.pos.x;
    bg->ground13.pos.x=s.bg.ground13.pos.x;
    
    bg->ground.pos.y=s.bg.ground.pos.y;
    bg->ground2.pos.y=s.bg.ground2.pos.y;
    bg->ground3.pos.y=s.bg.ground3.pos.y;
    bg->ground4.pos.y=s.bg.ground4.pos.y;
    bg->ground5.pos.y=s.bg.ground5.pos.y;
    bg->ground6.pos.y=s.bg.ground6.pos.y;
    bg->ground7.pos.y=s.bg.ground7.pos.y;
    bg->ground8.pos.y=s.bg.ground8.pos.y;
    bg->ground9.pos.y=s.bg.ground9.pos.y;
    bg->ground10.pos.y=s.bg.ground10.pos.y;
    bg->ground11.pos.y=s.bg.ground11.pos.y;
    bg->ground12.pos.y=s.bg.ground12.pos.y;
    bg->ground13.pos.y=s.bg.ground13.pos.y;
    
    
    bg->camera_pos1.x=s.bg.camera_pos1.x;
    bg->camera_pos1.y=s.bg.camera_pos1.y;
    
    
    printf("perso et background chargés\n");
    

}



void liberer_g(SDL_Surface* screen,background_g b,background_g bestscore,personnage p,personnage p2,SDL_Surface* miniplayerSurface,SDL_Surface* minienemySurface,SDL_Surface* minienemySurface2,SDL_Surface* minimapSurface,TTF_Font* font,ES es1,ES bonus)
{
SDL_FreeSurface (screen);
SDL_FreeSurface(b.background1);
SDL_FreeSurface(b.background2);
SDL_FreeSurface(b.sprite);
SDL_FreeSurface(bestscore.img);
    SDL_FreeSurface(miniplayerSurface);
    SDL_FreeSurface(minienemySurface);
    SDL_FreeSurface(minienemySurface2);
    SDL_FreeSurface(minimapSurface);
Mix_FreeMusic(b.music[1]);
Mix_FreeMusic(b.music[2]);

TTF_CloseFont(font);
SDL_FreeSurface(p.sprite);
SDL_FreeSurface(p.viesprite);
SDL_FreeSurface(p.scoretxt.texte);
TTF_CloseFont(p.scoretxt.police);
SDL_FreeSurface(p.txt.texte);
TTF_CloseFont(p.txt.police);


SDL_FreeSurface(bonus.image);
SDL_FreeSurface(b.ground.image);
SDL_FreeSurface(b.ground2.image);
SDL_FreeSurface(b.ground3.image);
SDL_FreeSurface(b.ground4.image);
SDL_FreeSurface(b.ground5.image);
SDL_FreeSurface(b.ground6.image);
SDL_FreeSurface(b.ground7.image);
SDL_FreeSurface(b.ground8.image);
SDL_FreeSurface(b.ground9.image);
SDL_FreeSurface(b.ground10.image);
SDL_FreeSurface(b.ground11.image);
SDL_FreeSurface(b.ground12.image);
SDL_FreeSurface(b.ground13.image);
SDL_FreeSurface(b.ground21.image);
SDL_FreeSurface(b.ground22.image);
SDL_FreeSurface(b.ground23.image);
SDL_FreeSurface(b.ground24.image);
SDL_FreeSurface(b.ground25.image);
SDL_FreeSurface(b.ground26.image);
SDL_FreeSurface(b.ground27.image);
SDL_FreeSurface(b.ground28.image);
SDL_FreeSurface(b.ground29.image);
SDL_FreeSurface(b.ground210.image);
SDL_FreeSurface(b.ground211.image);
SDL_FreeSurface(b.ground212.image);
SDL_FreeSurface(b.ground213.image);
TTF_Quit();
SDL_Quit();

}




void initialiserTic(tic *t,SDL_Surface * ecran)
{
int i;
int S=-1;
SDL_Rect posText;
SDL_Surface * text;
SDL_Surface * im1;
SDL_Surface * im1S;
SDL_Surface * im2;
SDL_Surface * im2S;
SDL_Rect pos1;
SDL_Rect pos2;
SDL_Event e;

  t->bg=IMG_Load("BG.gif");
  t->bg1=IMG_Load("bg11.gif");
  t->X=IMG_Load("X.gif");
  t->O=IMG_Load("O.gif");
  for(i=0;i<9;i++)
  {
  t->tabsuivi[i]=0;
  }
  t->tour=0;
  t->s=-1;
  t->S=IMG_Load("selection.png");
  
  t->pos.x=90;
  t->pos.y=65;
  t->pos.h=155;
  t->pos.w=205;
  
  im1=IMG_Load("IMAGE1.gif");
  im2=IMG_Load("IMAGE2.gif");
  pos1.x=100;
  pos1.y=100;
  pos1.h=200;
  pos1.w=200;
  
  pos2.x=100;
  pos2.y=300;
  pos2.h=200;
  pos2.w=200;
  
  t->Posbg.x=0;
  t->Posbg.y=0;
  t->Posbg.h=842;
  t->Posbg.w=595;
  
  t->font=TTF_OpenFont("Apple Cream.otf",50);
  t->textColor.r=137;
  t->textColor.g=101;
  t->textColor.b=0;
  t->PosT.x=300;
  t->PosT.y=300;
  
  t->joueur=0;
  
  posText.x=50;
  posText.y=50;
  text=TTF_RenderText_Solid(t->font,"WELCOM TO THE TIC TAC TOE ", t->textColor);
  int continu=1;
  while(continu)
  {SDL_BlitSurface(t->bg1, NULL, ecran ,  &t->Posbg);
  SDL_BlitSurface(text, NULL, ecran ,  &posText);
  if(S==-1)
    {SDL_BlitSurface(im1, NULL, ecran ,  &pos1);
      SDL_BlitSurface(im2, NULL, ecran , &pos2);}
     else  if(S==0)
     { 
     SDL_BlitSurface(im2, NULL, ecran , &pos2);}
     else
     {SDL_BlitSurface(im1, NULL, ecran ,  &pos1);
      }
     
     SDL_PollEvent(&e);
     switch(e.type)
     {case SDL_QUIT:
		    continu=0;
		    
		    break;
     
     case SDL_MOUSEMOTION:
     S=-1;
     if(e.motion.x > 100 && e.motion.x < 100+170 && e.motion.y > 100 && e.motion.y < 300)
                            SDL_BlitSurface(im1, NULL, ecran ,  &pos1);
     if(e.motion.x > 100 && e.motion.x < 100+170 &&  e.motion.y > 300 && e.motion.y < 500)
                            SDL_BlitSurface(im2, NULL, ecran ,  &pos2);
     break;
     
     case SDL_MOUSEBUTTONDOWN:
     if(e.button.x > 100 && e.button.x < 100+170 && e.button.y > 100 && e.button.y < 300)
                            {t->joueur=1;
                            continu=0;}
     if(e.button.x > 100 && e.button.x < 100+170 &&  e.button.y > 300 && e.button.y < 500)
                            {t->joueur=-1;
                            continu=0;}
  
     
     break;}
     
     SDL_Flip(ecran); 
     
  }
  
  for(i=0;i<9;i++)
  {
  t->tabPos[i].x=t->pos.w*(i%3)+140;
  t->tabPos[i].y=t->pos.h*(i/3)+65;
  t->tabPos[i].h=155;
  t->tabPos[i].w=205;
  }
  
  
   for(i=0;i<9;i++)
  {
  t->tabS[i].x=t->pos.w*(i%3)+95;
  t->tabS[i].y=t->pos.h*(i/3)+65;
  t->tabS[i].h=155;
  t->tabS[i].w=205;
  }
  }
  void afficherTic(tic t,SDL_Surface* ecran)
  {
  int i;
  
  SDL_BlitSurface(t.bg, NULL, ecran ,  &t.Posbg);
  
  
  for(i=0;i<9;i++)
  {
  	if (t.tabsuivi[i]==-1)
  	{
  	  SDL_BlitSurface(t.X, NULL, ecran , &t.tabPos[i]);
  	  }
  	 
  	  if(t.tabsuivi[i]==1)
  	  {
  	  	SDL_BlitSurface(t.O, NULL, ecran , &t.tabPos[i]);
  	  	}
  }
  if (t.s>=0 && t.s<=8)
  SDL_BlitSurface(t.S, NULL, ecran , &t.tabS[t.s]);
  
  
  }
  
  



int atilganer(int tabsuivi[])
{
  int i,tr;
  int ligne_gagnantes[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
  for(i=0;i<8 ;i++)
  {
  	if(tabsuivi[ligne_gagnantes[i][0]]==tabsuivi[ligne_gagnantes[i][1]] 
  	&& tabsuivi[ligne_gagnantes[i][1]]==tabsuivi[ligne_gagnantes[i][2]] 
  	&& tabsuivi[ligne_gagnantes[i][2]]!=0)
  	{
  	return tabsuivi[ligne_gagnantes[i][2]];
}
}
return 0;
}

void Resultat(tic t,SDL_Surface * ecran)
{int i,angle=200;
	
	
	if(t.gagnet==2 || t.gagnet==3)
	{for(i=0;i<6;i++)
	{t.SurfaceText=TTF_RenderText_Solid(t.font,"GOOD ", t.textColor);
	SDL_Surface* rotozoomedSurface = rotozoomSurface(t.SurfaceText,0,i, 0);
	SDL_BlitSurface(t.bg1, NULL, ecran , &t.Posbg);
	SDL_BlitSurface(rotozoomedSurface, NULL, ecran, &t.PosT);
	SDL_Flip(ecran);
	SDL_Delay(200);}}
	
	
	else
	{t.SurfaceText=TTF_RenderText_Solid(t.font,"Hard Luck ", t.textColor);
	while(angle>0){
		SDL_Surface* rotozoomedSurface = rotozoomSurface(t.SurfaceText, angle, 1.0, 0);
		SDL_BlitSurface(t.bg1, NULL, ecran , &t.Posbg);

		SDL_BlitSurface(rotozoomedSurface, NULL, ecran, &t.PosT);
		SDL_Flip(ecran);
		angle=angle-10;
 		 SDL_Delay(70); 
	}}
	
	
	

}
	
	
	
	
	
	

  void liberer_tic(tic t)
  {
  	SDL_FreeSurface(t.bg);
  	SDL_FreeSurface(t.X);
  	SDL_FreeSurface(t.O);
  	TTF_CloseFont(t.font);
  	TTF_Quit();
  }
  
  
int minimax(int tabsuivi[], int joueur) {
    int gagnant = atilganer(tabsuivi);
    if (gagnant != 0) {
        
        
            if(joueur==1 && gagnant==1)
 	return 1;
 	else if (joueur==-1 && gagnant==-1) 
 	return -1;
        else
            return 0; // Match nul
    }

    int meilleur_coup = -1;
    int meilleure_valeur ;
   
    if(joueur==1)
  meilleure_valeur=INT_MIN;
  else
  meilleure_valeur=INT_MAX;

    for (int i = 0; i < 9; i++) {
        if (tabsuivi[i] == 0) {
            tabsuivi[i] = joueur;
            int valeur_coup = minimax(tabsuivi, -joueur);
            tabsuivi[i] = 0;

            if ((joueur == 1 && valeur_coup > meilleure_valeur) || (joueur == -1 && valeur_coup < meilleure_valeur)) {
                meilleure_valeur = valeur_coup;
                meilleur_coup = i;
            }
        }
    }

    return meilleur_coup;
}

 void calcul_coup(int tabsuivi[]) {
    int i, meilleure_valeur, valeur_coup, meilleur_coup;
    meilleure_valeur = INT_MIN;
    meilleur_coup = -1;
    
    for (i = 0; i < 9; i++) {
        if (tabsuivi[i] == 0) {
            tabsuivi[i] = 1;
            valeur_coup = minimax(tabsuivi, -1);
            tabsuivi[i] = 0;
            
            if (valeur_coup > meilleure_valeur) {
                meilleure_valeur = valeur_coup;
                meilleur_coup = i;
            }
        }
    }
    
    if (meilleur_coup != -1) {
        tabsuivi[meilleur_coup] = 1;
    }
}

 void afficherG(int tabsuivi[], SDL_Surface* ecran)
 {
 SDL_Surface * im1=IMG_Load("GAGNET1.png");
 SDL_Surface * im2=IMG_Load("GAGNET2.png");
 SDL_Surface * im3=IMG_Load("GAGNET3.png");
 SDL_Surface * im4=IMG_Load("GAGNET4.png");
 int i;
 SDL_Rect tab[9];
 
 for(i=0;i<3;i++)
 {tab[i].y=130+170*i;
 tab[i].x=100;
 tab[i].h=im1->h;
 tab[i].w=im1->w;
 }
 for(i=3;i<6;i++)
 {tab[i].y=80;
 tab[i].x=200+190*(i-3);
 tab[i].h=im2->h;
 tab[i].w=im2->w;
 }
 tab[6].x=120;
 tab[6].y=90;
 tab[6].h=im3->h;
 tab[6].w=im3->w;
 
 tab[7].x=120;
 tab[7].y=90;
 tab[7].h=im4->h;
 tab[7].w=im4->w;
 
 
 
  if(tabsuivi[0]==tabsuivi[1] && tabsuivi[1]==tabsuivi[2] && tabsuivi[2]!=0 )
  SDL_BlitSurface(im1, NULL, ecran, & tab[0]);
  if(tabsuivi[3]==tabsuivi[4] && tabsuivi[4]==tabsuivi[5]  && tabsuivi[3]!=0)
  SDL_BlitSurface(im1, NULL, ecran, & tab[1]);
  if(tabsuivi[6]==tabsuivi[7] && tabsuivi[7]==tabsuivi[8] && tabsuivi[6]!=0)
  SDL_BlitSurface(im1, NULL, ecran, & tab[2]);
  
  
  if (tabsuivi[0]==tabsuivi[3] && tabsuivi[3]==tabsuivi[6] && tabsuivi[6]!=0)
       SDL_BlitSurface(im2, NULL, ecran, &tab[3]);
       
      if (tabsuivi[1]==tabsuivi[4] && tabsuivi[4]==tabsuivi[7] && tabsuivi[7]!=0)
       SDL_BlitSurface(im2, NULL, ecran, &tab[4]);
       
       if (tabsuivi[2]==tabsuivi[5] && tabsuivi[5]==tabsuivi[8] && tabsuivi[8]!=0)
       SDL_BlitSurface(im2, NULL, ecran, &tab[5]);
       
   if (tabsuivi[0]==tabsuivi[4] && tabsuivi[4]==tabsuivi[8] && tabsuivi[8]!=0)
       SDL_BlitSurface(im3, NULL, ecran, & tab[6]);
       
   if (tabsuivi[2]==tabsuivi[4] && tabsuivi[4]==tabsuivi[6] && tabsuivi[6]!=0)
       SDL_BlitSurface(im4, NULL, ecran, & tab[7] );
       
       
 
 SDL_Flip(ecran);
 }
 
 
 

