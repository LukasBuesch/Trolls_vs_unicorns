#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDE
#include <SDL.h>
#include <SDL_mixer.h>




    SDL_Surface *vorbereitung = NULL;   // Oberfläche Ausgabe
    SDL_Surface *hintergrund = NULL;  //Hintergrund
    SDL_Surface *bildspieler1 = NULL;
    SDL_Surface *bildspieler1andere = NULL;
    SDL_Surface *bildspieler1waffel = NULL;
    SDL_Surface *bildspieler1waffer = NULL;
    SDL_Surface *bildspieler1verteidigung = NULL;
    SDL_Surface *bildspieler1ergebnis = NULL;

    SDL_Surface *bildspieler2 = NULL;
    SDL_Surface *bildspieler2andere = NULL;
    SDL_Surface *bildspieler2waffel = NULL;
    SDL_Surface *bildspieler2waffer = NULL;
    SDL_Surface *bildspieler2verteidigung = NULL;
    SDL_Surface *bildspieler2ergebnis = NULL;

    SDL_Surface *bildleben = NULL;

    SDL_Surface *bildflugzeug = NULL;



    Mix_Music *hintergrundmusik = NULL;
    Mix_Chunk *musikspieler1angriff = NULL;
    Mix_Chunk *musikspieler2angriff = NULL;
    Mix_Chunk *musikspieler1gewinnt = NULL;
    Mix_Chunk *musikspieler2gewinnt = NULL;



// Returnt 1 bei erfolgreichen laden aller Bilder
int loadSDLdata () {




hintergrundmusik = Mix_LoadMUS("data/ton/hintergundmusik.wav");
    if(hintergrundmusik==NULL){
            printf("Musikladefehler hintergundmusik.wav konnte nicht geladen werden\n");
            return 2;
            }

    musikspieler1angriff = Mix_LoadMUS("data/ton/trollangriff.wav");
    if(musikspieler1angriff==NULL){
            printf("Musikladefehler trollangriff.wav konnte nicht geladen werden\n");
            return 2;
            }

    musikspieler2angriff = Mix_LoadMUS("data/ton/einhornangriff.wav");
    if(musikspieler2angriff==NULL){
            printf("Musikladefehler einhornangriff.wav konnte nicht geladen werden\n");
            return 2;
            }


    musikspieler1gewinnt = Mix_LoadMUS("data/ton/trollgewinnt.wav");
    if(musikspieler1gewinnt==NULL){
            printf("Musikladefehler trollgewinnt.wav konnte nicht geladen werden\n");
            return 2;
            }

    musikspieler2gewinnt = Mix_LoadMUS("data/ton/einhorngewinnt.wav");
    if(musikspieler2gewinnt==NULL){
            printf("Musikladefehler einhorngewinnt.wav konnte nicht geladen werden\n");
            return 2;
            }


    hintergrund = SDL_LoadBMP("data/bild/background.bmp");
        if(hintergrund==NULL){
            printf("Bildladefehler    background.bmp.bmp konnte nicht geladen werden\n");
            return 3;
            }




    bildspieler1 = SDL_LoadBMP("data/bild/bild1r.bmp");
        if(bildspieler1==NULL){
        printf("Bildladefehler    bild1.bmp konnte nicht geladen werden\n");
        return 3;
        }

     bildspieler1andere = SDL_LoadBMP("data/bild/bild1l.bmp");
        if(bildspieler1==NULL){
        printf("Bildladefehler    bild1.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler2 = SDL_LoadBMP("data/bild/bild2l.bmp");
        if(bildspieler2==NULL){
        printf("Bildladefehler    bild2.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler2andere = SDL_LoadBMP("data/bild/bild2r.bmp");
        if(bildspieler2==NULL){
        printf("Bildladefehler    bild2.bmp konnte nicht geladen werden\n");
        return 3;
        }
    bildspieler2waffel = SDL_LoadBMP("data/bild/flammel.bmp");
        if(bildspieler2waffel==NULL){
            printf("Bildladefehler    flammel.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler2waffer = SDL_LoadBMP("data/bild/flammer.bmp");
        if(bildspieler2waffer==NULL){
            printf("Bildladefehler    flammer.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler1waffel = SDL_LoadBMP("data/bild/pissel.bmp");
        if(bildspieler1waffel==NULL){
            printf("Bildladefehler    pissel.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler1waffer = SDL_LoadBMP("data/bild/pisser.bmp");
        if(bildspieler1waffer==NULL){
            printf("Bildladefehler    pisser.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildleben = SDL_LoadBMP("data/bild/leben.bmp");
        if(bildleben==NULL){
            printf("Bildladefehler    leben.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler1verteidigung = SDL_LoadBMP("data/bild/verteidigung1.bmp");
        if(bildspieler1verteidigung==NULL){
            printf("Bildladefehler    verteidigung1.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler2verteidigung = SDL_LoadBMP("data/bild/verteidigung2.bmp");
        if(bildspieler2verteidigung==NULL){
            printf("Bildladefehler    verteidigung2.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler1ergebnis = SDL_LoadBMP("data/bild/ergebnis1.bmp");
        if(bildspieler1ergebnis==NULL){
            printf("Bildladefehler    ergebnis1.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildspieler2ergebnis = SDL_LoadBMP("data/bild/ergebnis2.bmp");
        if(bildspieler2ergebnis==NULL){
            printf("Bildladefehler    ergebnis2.bmp konnte nicht geladen werden\n");
        return 3;
        }

    bildflugzeug = SDL_LoadBMP("data/bild/flugzeug.bmp");
        if(bildflugzeug==NULL){
            printf("Bildladefehler    flugzeug.bmp konnte nicht geladen werden\n");
        return 3;
        }
return 1;
}


#endif
