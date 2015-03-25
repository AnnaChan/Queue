/*************************************************************************
Αρχείo Υλoπoίησης	: QArray.c
Συγγραφέας			: Γ. Κοτρώνης
Σκoπός				: Υλoπoίηση με πίνακα Αφηρημένoυ Τύπoυ Δεδoμένων, Ουρά
**************************************************************************/
#include <stdio.h>

#include "ch6_QArray1.h"

/*oρισμός συναρτήσεων*/

void OuraDimiourgia(TOuras *oura )
{
	oura->embros =  0;
	oura->piso = 0;
}

int OuraKeni(TOuras oura)
{
	return ( oura.embros == oura.piso );
}

int GematiOura(TOuras oura)
{
	int neo_piso = (oura.piso+1) % PLITHOS;
	if (neo_piso == oura.embros )
		return 1;
	else 
		return 0;
}

int OuraProsthesi(TOuras *oura, TStoixeioyOuras stoixeio)
{
	if (GematiOura(*oura))
		return 0;
	else
	{
		TSoura_setValue(&(oura->pinakas[oura->piso]),stoixeio); /* abstraction for any type */
		oura->piso = ( oura->piso + 1 )% PLITHOS;
	}
	return 1;
}

int OuraApomakrynsh(TOuras *oura, TStoixeioyOuras *stoixeio)
{
	if (OuraKeni(*oura))
		return 0;
	else
	{
		TSoura_setValue(stoixeio, oura->pinakas[oura->embros]); /* abstraction for any type */
		oura->embros = ( oura->embros + 1 )% PLITHOS;
	}
	return 1;
}

void inspectQbyOrder (TOuras oura)
{ int current=oura.embros;
	if (!OuraKeni(oura))
	{
		do
		{
			TSoura_writeValue(stdout, oura.pinakas[current]);
			printf("-");
			current = (current+1)%PLITHOS;
		}
		while (current != oura.piso);
		printf("\n");
	}
}


void inspectQbyArray (TOuras oura)
{ int i;
	for (i=0; i<PLITHOS; i++){
			TSoura_writeValue(stdout, oura.pinakas[i]);
			printf("-");
}
	printf("\n");

}

