#include <SDL.h>
#include <stdio.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "bewegung.h"
#include "kampf.h"
#include "eingabe.h"
#include "dateityp.h"
#include "loadimage.h"
#include "render.h"
#define FPS 100

SDL_Event event;




int main(int argc, char* args[])
{

    Tasten.run=1;


    Tasten.flugzeug = 1300;
    Tasten.zeitalt =(SDL_GetTicks());
    int fpsticker = 0;
    int fps = 0;
    int fpsverzoegerung = 0;


    SDL_Window *ausgabe = NULL;        // Hauptfenster



    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_ShowCursor(SDL_DISABLE);    // Mauszeiger entfernen
    Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 );            // Audio initialisieren


    ausgabe = SDL_CreateWindow           (
                  "Game",
                  0,        // Fenster Position
                  25,       // Fenster Position
                  1280,     // Fenstergröße
                  720,      // Fenstergröße
                  SDL_WINDOW_FULLSCREEN
              );

    if (ausgabe == NULL)
    {
        printf("Fenster konnte nicht erstellt werden");
        return 1;
    }


    vorbereitung = SDL_GetWindowSurface(ausgabe);   //Initialisierung der Ausgabe






    /**************************************************************************************************************************************************************************************************/
    if(loadSDLdata()!=1)            // Laden der Bilder
    {
        return 3;
    }


    Mix_PlayMusic( hintergrundmusik, -1 );
   // Mix_PlayChannel(-1,musikspieler1angriff,0);



    while(Tasten.run==1)                // Laufen bis das Fenster geschlossen wird oder Escape gedrückt wird
    {

        struct Figur spieler1 = {20,BODEN,"r",0,LEBEN,0,"Troll",0,0,0,0};
        struct Figur spieler2 = {1150,BODEN,"l",0,LEBEN,0,"Einhorn",0,0,0,0};

        Tasten.run=2;
        Mix_ResumeMusic();



        //Neue Regulierung
    Uint32 timer = SDL_GetTicks();
    Uint32 lastTime = SDL_GetTicks();
    double millisec = 1000.0 / FPS;
    double delta = 0;
    int frames = 0;
    int ticks = 0;
        while(Tasten.run == 2)
        {
            SDL_PollEvent(&event);




        Uint32 newTime = SDL_GetTicks();
        delta += (newTime - lastTime) / millisec;
        lastTime = newTime;
        Eingabe(& Tasten);
        while(delta >= 1) {


            Abwehr(&Tasten,&spieler1,&spieler2);
            Angriff(&Tasten,&spieler1,&spieler2);
            Bewegung(& Tasten,& spieler1,& spieler2);
            Sprung(&Tasten,&spieler1,&spieler2);
            ticks++;
            delta -= 1;
        }
        SDL_BlitSurface(hintergrund,NULL,vorbereitung,NULL);
        renderSDLdata(&Tasten,&spieler1,&spieler2);
        frames++;
        if(SDL_GetTicks() - timer > 1000) {
            timer += 1000;
            printf("ticks: %d\tfps: %d\n", ticks, frames);printf("%d",Tasten.rechtsbewegungspieler1);
            ticks = 0;
            frames = 0;
        }







            if(spieler1.leben<0 || spieler2.leben<0)
            {
                Tasten.run=1;

                if(spieler2.leben<=0)
                {
                    SDL_BlitSurface(bildspieler1ergebnis,NULL,vorbereitung,NULL);
                        Mix_PlayMusic( musikspieler1gewinnt, -1 );

                }
                else if (spieler1.leben<=0)
                {
                    SDL_BlitSurface(bildspieler2ergebnis,NULL,vorbereitung,NULL);
                    Mix_PlayMusic( musikspieler2gewinnt, -1 );
                }
                SDL_UpdateWindowSurface(ausgabe);
                SDL_Delay(3000);
                int abbruch = 1;
                while(abbruch)
                {
                    while (SDL_PollEvent(&event)!=0)
                    {
                        if (event.type== SDL_KEYDOWN)
                        {
                            abbruch = 0;
                        }
                    }
                    Mix_PlayMusic( hintergrundmusik, -1 );

                }

            }




            SDL_UpdateWindowSurface(ausgabe);


        }
    }



    SDL_DestroyWindow(ausgabe);
    SDL_FreeSurface(vorbereitung);
    SDL_FreeSurface(bildspieler1);
    SDL_FreeSurface(bildspieler1andere);
    SDL_FreeSurface(bildspieler1waffel);
    SDL_FreeSurface(bildspieler1waffer);
    SDL_FreeSurface(bildspieler1ergebnis);

    SDL_FreeSurface(bildspieler2);
    SDL_FreeSurface(bildspieler2andere);
    SDL_FreeSurface(bildspieler2waffel);
    SDL_FreeSurface(bildspieler2waffer);
    SDL_FreeSurface(bildspieler2ergebnis);

    SDL_FreeSurface(bildleben);

    SDL_FreeSurface(bildflugzeug);

    Mix_CloseAudio();
    SDL_Quit();
    printf("\n\tSicher beendet\n\n");
    return 0;
}
