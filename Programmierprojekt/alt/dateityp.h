#ifndef DATEITYP_H_INCLUDED
#define DATEITYP_H_INCLUDED

#include <SDL.h>
#include <SDL_mixer.h>


struct Figur{
        int positionx;
        int positiony;
        char blickrichtung;
        int angriff;
        double leben;
        int verteidigung;
        char name[20];
        int zeitseitangriff;
        int zeitseitverteidigung;
        int zeitseitsprung;
        int absprunghoehe;
};

struct Tasten{
    int linksbewegungspieler1;
    int rechtsbewegungspieler1;
    int springenbewegungspieler1;
    int angriffbewegungspieler1;
    int verteidigungbewegungspieler1;

    int linksbewegungspieler2;
    int rechtsbewegungspieler2;
    int springenbewegungspieler2;
    int angriffbewegungspieler2;
    int verteidigungbewegungspieler2;
    int run;
    int flugzeug;
    int fpsaktuell;

}Tasten;








#endif
