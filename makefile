prog:fonctions.o main.o
	gcc fonctions.o main.o -o prog -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -lSDL_gfx -g -lm
main.o:main.c
	gcc -c main.c -g
fonctions.o:fonctions.c
	gcc -c fonctions.c -g
