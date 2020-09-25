#ifndef RENDER_H_INCLUDED
#define RENDER_H_INCLUDE
#include <SDL.h>
#include <SDL_mixer.h>
#include "dateityp.h"



void renderSDLdata (struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2){

   SDL_Rect position;          // Position des Bildes


   //Flugzeug

            position.x = Tasten.flugzeug;
            position.y = 50;

            if((SDL_GetTicks()/100)>100&& Tasten.flugzeug>-1300)
            {

                SDL_BlitSurface(bildflugzeug,NULL,vorbereitung,&position);
                Tasten.flugzeug=Tasten.flugzeug- 2;
            }




            position.x = (*spieler1).positionx;
            position.y = (*spieler1).positiony;

            if((*spieler1).blickrichtung=='l')
            {
                SDL_BlitSurface(bildspieler1andere,NULL,vorbereitung,&position);
                if(Tasten.angriffbewegungspieler1==1)
                {

                    position.x = (*spieler1).positionx -60;
                    position.y = (*spieler1).positiony+25;
                    SDL_BlitSurface(bildspieler1waffel,NULL,vorbereitung,&position);
                }

            }
            else
            {
                SDL_BlitSurface(bildspieler1,NULL,vorbereitung,&position);
                if(Tasten.angriffbewegungspieler1==1)
                {
                    position.x = (*spieler1).positionx + 60;
                    position.y = (*spieler1).positiony + 25;
                    SDL_BlitSurface(bildspieler1waffer,NULL,vorbereitung,&position);
                }

            }

            //Verteidigung Spieler 1

            position.x = (*spieler1).positionx+12;
            position.y = (*spieler1).positiony-20;

            if((*spieler1).verteidigung==1)
            {
                SDL_BlitSurface(bildspieler1verteidigung,NULL,vorbereitung,&position);
            }

            //Spieler2

            position.x = (*spieler2).positionx;
            position.y = (*spieler2).positiony;

            if((*spieler2).blickrichtung=='r')
            {
                SDL_BlitSurface(bildspieler2andere,NULL,vorbereitung,&position);
                if(Tasten.angriffbewegungspieler2==1)
                {
                    position.x = (*spieler2).positionx +85;
                    position.y = (*spieler2).positiony + 10;
                    SDL_BlitSurface(bildspieler2waffer,NULL,vorbereitung,&position);
                }
            }
            else
            {
                SDL_BlitSurface(bildspieler2,NULL,vorbereitung,&position);
                if(Tasten.angriffbewegungspieler2==1)
                {
                    position.x = (*spieler2).positionx -85;
                    position.y = (*spieler2).positiony+10;
                    SDL_BlitSurface(bildspieler2waffel,NULL,vorbereitung,&position);
                }
            }

            //Verteidigung Spieler 2

            position.x = (*spieler2).positionx;
            position.y = (*spieler2).positiony-20;

            if((*spieler2).verteidigung==1)
            {
                SDL_BlitSurface(bildspieler2verteidigung,NULL,vorbereitung,&position);
            }

            //Leben Spieler 1

            double leben1;
            int pixel1;
            for(leben1=(*spieler1).leben,pixel1=30; leben1>0; leben1--,pixel1=pixel1+20)
            {
                position.x = pixel1;
                position.y = 20;
                SDL_BlitSurface(bildleben,NULL,vorbereitung,&position);
            }

            //Leben Spieler 2

            double leben2;
            int pixel2;
            for(leben2=(*spieler2).leben,pixel2=1200; leben2>0; leben2--,pixel2=pixel2-20)
            {
                position.x = pixel2;
                position.y = 20;
                SDL_BlitSurface(bildleben,NULL,vorbereitung,&position);
            }
















}




#endif
