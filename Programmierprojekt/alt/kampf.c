#include "kampf.h"

void Angriff(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2){

if((*eingabe).angriffbewegungspieler1==1){

if(((((*spieler1).positionx)-((*spieler2).positionx))<130 &&(((*spieler1).positionx)-((*spieler2).positionx))>(-130))&&(((*spieler1).positiony)-((*spieler2).positiony))<80 &&(((*spieler1).positiony)-((*spieler2).positiony))>(-80))
    if((((*spieler1).positionx)<((*spieler2).positionx))&&((*spieler1).blickrichtung=='r'))
{
    if ((*spieler2).verteidigung==0)
    ((*spieler2).leben)=((*spieler2).leben)-0.02;

}
    else if ((((*spieler1).positionx)>((*spieler2).positionx))&&((*spieler1).blickrichtung=='l'))
    {
    if ((*spieler2).verteidigung==0)
    ((*spieler2).leben)=((*spieler2).leben)-0.02;

    }

}

/*-------------SPIELER 2----------------*/

if((*eingabe).angriffbewegungspieler2==1){

if(((((*spieler2).positionx)-((*spieler1).positionx))<130 &&(((*spieler2).positionx)-((*spieler1).positionx))>(-130))&&(((*spieler2).positiony)-((*spieler1).positiony))<80 &&(((*spieler2).positiony)-((*spieler1).positiony))>(-80))

    if((((*spieler2).positionx)<((*spieler1).positionx))&&((*spieler2).blickrichtung=='r'))
{
    if ((*spieler1).verteidigung==0)
    ((*spieler1).leben)=((*spieler1).leben)-0.02;

}
    else if ((((*spieler2).positionx)>((*spieler1).positionx))&&((*spieler2).blickrichtung=='l'))
    {
    if ((*spieler1).verteidigung==0)
    ((*spieler1).leben)=((*spieler1).leben)-0.02;

    }

}
}

void Abwehr(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2){

if(((*eingabe).verteidigungbewegungspieler1==1)&&((SDL_GetTicks()/100))>(*spieler1).zeitseitverteidigung+VERTEIDIGUNGSCD){
   (*spieler1).zeitseitverteidigung=(SDL_GetTicks()/100);}
    if ((*spieler1).zeitseitverteidigung+VERTEIDIGUNGSZEIT>=(SDL_GetTicks()/100))
    {(*spieler1).verteidigung=1;}
    else{(*spieler1).verteidigung=0;}


if(((*eingabe).verteidigungbewegungspieler2==1)&&((SDL_GetTicks()/100))>(*spieler2).zeitseitverteidigung+VERTEIDIGUNGSCD){
   (*spieler2).zeitseitverteidigung=(SDL_GetTicks()/100);}
    if ((*spieler2).zeitseitverteidigung+VERTEIDIGUNGSZEIT>=(SDL_GetTicks()/100))
    {(*spieler2).verteidigung=1;}
    else{(*spieler2).verteidigung=0;}


}
