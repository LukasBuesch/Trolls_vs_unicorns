#ifndef KAMPF_H_INCLUDED
#define KAMPF_H_INCLUDED

#include "dateityp.h"

#define LEBEN 10
#define VERTEIDIGUNGSZEIT 8
#define VERTEIDIGUNGSCD 20



void Angriff(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2);

void Abwehr(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2);





#endif
