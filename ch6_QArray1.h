/**********************************************+**************************
������ ������������	: QArray.h
����������				: �. ��������
������					: ��������� �� ������ ���������� ����� ��������� ����
**************************************************************************/
#ifndef __CH2_QARRAY__ 
#define __CH2_QARRAY__
#include "TStoixeioyOuras.h"

/*�������� �����*/

#define PLITHOS 5

typedef struct {
	int embros;		/*���� ��� ������ ��������� ��� �����*/
	int piso;		/*���� ��� ���������� ��������� ��� �����*/
	int metritis;
	TStoixeioyOuras pinakas[PLITHOS];	/*� ������� ���������*/
} TOuras;	   /*� ����� ��� �����*/

/*�������� �����������*/

/*����������*/  
void OuraDimiourgia(TOuras *oura);

/*������� �������*/
int	OuraKeni	(TOuras oura);
int	GematiOura	(TOuras oura);
int SizeOuras(TOuras oura);

/*������� ���������/������������*/
int OuraProsthesi	(TOuras *oura, TStoixeioyOuras stoixeio);
int OuraApomakrynsh(TOuras *oura, TStoixeioyOuras *stoixeio);

void inspectQbyOrder (TOuras oura);
void inspectQbyArray (TOuras oura);

#endif /*#ifndef __CH2_QARRAY__ */
