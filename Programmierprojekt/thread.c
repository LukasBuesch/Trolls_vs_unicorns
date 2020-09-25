#include "thread.h"
#include <SDL.h>

int threadeingabe (struct Tasten *eingabe){
const Uint8 *keyState;
while ((*eingabe).run !=0){
    keyState = SDL_GetKeyboardState(NULL);

    if (keyState[SDL_SCANCODE_A])
    (*eingabe).linksbewegungspieler1 = 1;
    else
        (*eingabe).linksbewegungspieler1 = 0;

    if(keyState[SDL_SCANCODE_D])
    (*eingabe).rechtsbewegungspieler1 = 1;
    else
        (*eingabe).rechtsbewegungspieler1 = 0;

     if(keyState[SDL_SCANCODE_W])
    (*eingabe).springenbewegungspieler1 = 1;
    else
        (*eingabe).springenbewegungspieler1 = 0;

         if(keyState[SDL_SCANCODE_V])
    (*eingabe).angriffbewegungspieler1 = 1;
    else
        (*eingabe).angriffbewegungspieler1 = 0;

         if(keyState[SDL_SCANCODE_C])
    (*eingabe).verteidigungbewegungspieler1 = 1;
    else
        (*eingabe).verteidigungbewegungspieler1 = 0;

      // 2. Spieler


         if(keyState[SDL_SCANCODE_LEFT])
    (*eingabe).linksbewegungspieler2 = 1;
    else
        (*eingabe).linksbewegungspieler2 = 0;

    if(keyState[SDL_SCANCODE_RIGHT])
    (*eingabe).rechtsbewegungspieler2 = 1;
    else
        (*eingabe).rechtsbewegungspieler2 = 0;

     if(keyState[SDL_SCANCODE_UP])
    (*eingabe).springenbewegungspieler2 = 1;
    else
        (*eingabe).springenbewegungspieler2 = 0;

         if(keyState[SDL_SCANCODE_PERIOD])
    (*eingabe).angriffbewegungspieler2 = 1;
    else
        (*eingabe).angriffbewegungspieler2 = 0;

         if(keyState[SDL_SCANCODE_COMMA])
    (*eingabe).verteidigungbewegungspieler2 = 1;
    else
        (*eingabe).verteidigungbewegungspieler2 = 0;

        if(keyState[SDL_SCANCODE_ESCAPE])
            (*eingabe).run=0;

}
}
