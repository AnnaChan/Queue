/*************************************************
Αρχείο Υλοποίησης	: TestQueue.c
Συγγραφέας			: Γ. Κοτρώνης
Σκοπός				: Paradeigma gia Dokimh  ATD Oyra
**************************************************/
#include <stdio.h>

#include "ch6_QArray1.h"
#include "TStoixeioyOuras.h"

int main(void)
{
	int i;
	TStoixeioyOuras in, out;

	TOuras oura;
	
	do {
		printf("epilogh 0-6:"); 
		if (scanf("%d", &i)!=1) 
		{ printf("not integer input i=%d\n",i); i=1;}
		getchar();
		
		switch (i) {
		case 0:	OuraDimiourgia(&oura); 
							printf("... klhsh DhmiourgiaOura\n");
					break;
		case 1:	if (OuraKeni(oura))
							printf("... kenh\n"); 
					else 	printf("....Mh kenh\n");
					break;
		case 2:	if (GematiOura(oura))
							printf("... gemath\n"); 
					else 	printf("... Mh gemath\n");
					break;
		case 3:	 
					printf("Read input:"); 
					if (!TSoura_readValue(stdin, &in)) 
						printf("no input is read\n");
					else {
						TSoura_writeValue(stdin, in);
						if (!OuraProsthesi(&oura, in)){
							printf("... oura gemath, den eishx9ei to");
							TSoura_writeValue(stdout, in);
							printf("\n");
						}
						else { 
							printf("... eishx9ei to"); 
							TSoura_writeValue(stdout, in);
							printf("\n");
						}
					}
					break;
		case 4:	if  (!OuraApomakrynsh(&oura, &out))
							printf("... oura kenh\n");
				 	else 
				 	{	TSoura_writeValue(stdout, out);
						printf("\n");
				 	}
				 	break;
		case 5: inspectQbyOrder(oura);
				break;
		case 6: inspectQbyArray(oura);
				break;
		}
	} 
	while ((0<= i) && (i<=6));
	printf("To plhtos ths ouras einai: %d ", SizeOuras(oura));
	
	return 0;
}
