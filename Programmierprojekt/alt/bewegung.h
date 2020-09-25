#ifndef BEWEGUNG_H_INCLUDED
#define BEWEGUNG_H_INCLUDED

#include "dateityp.h"

#define SCHRITTGROESSE 3
#define SPRUNGHOEHE 200
#define SPRUNGZEIT 2
#define BODEN 585
#define SPRUNGVERZOEGERUNG 6
#define RANDLINKS 15
#define RANDRECHTS 1160

#define KASTEN11 (((*spieler1).positionx<330)||((*spieler1).positionx>700)||((*spieler1).positiony>460)||((*spieler1).positiony<450))
#define KASTEN21 (((*spieler1).positionx<750)||((*spieler1).positionx>1100)||((*spieler1).positiony>380)||((*spieler1).positiony<370))
#define KASTEN12 (((*spieler2).positionx<330)||((*spieler2).positionx>700)||((*spieler2).positiony>460)||((*spieler2).positiony<450))
#define KASTEN22 (((*spieler2).positionx<750)||((*spieler2).positionx>1100)||((*spieler2).positiony>380)||((*spieler2).positiony<370))
#define KASTEN31 (((*spieler1).positionx<330)||((*spieler1).positionx>870)||((*spieler1).positiony>255)||((*spieler1).positiony<245))
#define KASTEN32 (((*spieler2).positionx<330)||((*spieler2).positionx>870)||((*spieler2).positiony>255)||((*spieler2).positiony<245))







void Bewegung(struct Tasten *eingabe,struct Figur *spieler1,struct Figur *spieler2);

void Sprung(struct Tasten *eingabe,struct Figur *spieler1, struct Figur *spieler2);



#endif
