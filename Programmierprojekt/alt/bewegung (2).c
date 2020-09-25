#include "bewegung.h"
#include <math.h>


void Bewegung(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2){
    //Bewegung Spieler1
    if((*eingabe).linksbewegungspieler1 == 1 && (*spieler1).positionx>=RANDLINKS){
        (*spieler1).positionx=(*spieler1).positionx -SCHRITTGROESSE;
        (*spieler1).blickrichtung='l';
    }
    if((*eingabe).rechtsbewegungspieler1 == 1 && (*spieler1).positionx<=RANDRECHTS){
        (*spieler1).positionx=(*spieler1).positionx +SCHRITTGROESSE;
        (*spieler1).blickrichtung='r';
    }
    //Bewegung Spieler2
    if((*eingabe).linksbewegungspieler2 == 1 && (*spieler2).positionx>=RANDLINKS){
        (*spieler2).positionx=(*spieler2).positionx -SCHRITTGROESSE;
        (*spieler2).blickrichtung='l';
    }
    if((*eingabe).rechtsbewegungspieler2 == 1 && (*spieler2).positionx<=RANDRECHTS){
        (*spieler2).positionx=(*spieler2).positionx +SCHRITTGROESSE;
        (*spieler2).blickrichtung='r';
    }
}

void Sprung(struct Tasten *eingabe,struct Figur *spieler1, struct Figur *spieler2){

    if(((*eingabe).springenbewegungspieler1)==1&&(SDL_GetTicks()/100)>((*spieler1).zeitseitsprung)+SPRUNGVERZOEGERUNG){
            ((*spieler1).zeitseitsprung=(SDL_GetTicks()/100));
            (*spieler1).absprunghoehe=(*spieler1).positiony;}
        else if(((SDL_GetTicks()/100)-(*spieler1).zeitseitsprung)<=(SPRUNGZEIT)&&(*spieler1).positiony>((*spieler1).absprunghoehe-SPRUNGHOEHE)&&(SDL_GetTicks())>=(*eingabe).zeitalt+1)
        {
            (*spieler1).positiony=(*spieler1).positiony-8;
        }

       else if(((SDL_GetTicks()/100)-(*spieler1).zeitseitsprung)>(SPRUNGZEIT)&&(*spieler1).positiony<BODEN&&(SDL_GetTicks())>=(*eingabe).zeitalt+1)
        {
            if(KASTEN11&&KASTEN21&&KASTEN31)
         (*spieler1).positiony=(*spieler1).positiony+8;

        }


        if(((*eingabe).springenbewegungspieler2)==1&&(SDL_GetTicks()/100)>((*spieler2).zeitseitsprung)+SPRUNGVERZOEGERUNG){((*spieler2).zeitseitsprung=(SDL_GetTicks()/100));
        (*spieler2).absprunghoehe=(*spieler2).positiony;}
        else if(((SDL_GetTicks()/100)-(*spieler2).zeitseitsprung)<=(SPRUNGZEIT)&&(*spieler2).positiony>((*spieler2).absprunghoehe-SPRUNGHOEHE)&&(SDL_GetTicks())>=(*eingabe).zeitalt+1)
        {
            (*spieler2).positiony=(*spieler2).positiony-8;
        }

       else if(((SDL_GetTicks()/100)-(*spieler2).zeitseitsprung)>(SPRUNGZEIT)&&(*spieler2).positiony<BODEN&&(SDL_GetTicks())>=(*eingabe).zeitalt+1)
        {
            if(KASTEN12&&KASTEN22&&KASTEN32)
          (*spieler2).positiony=(*spieler2).positiony+8;

        }
    (*eingabe).zeitalt=(SDL_GetTicks());
}
