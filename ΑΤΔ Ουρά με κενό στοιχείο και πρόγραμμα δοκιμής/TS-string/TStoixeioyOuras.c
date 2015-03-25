#include "TStoixeioyOuras.h"

void TSoura_setValue (TStoixeioyOuras *target, TStoixeioyOuras source)
{
	strncpy(*target, source, 15);

}

int TSoura_readValue (FILE *from, TStoixeioyOuras *ElemPtr)
{
     return fscanf(from, "%s", *ElemPtr);
}

void TSoura_writeValue (FILE *to, TStoixeioyOuras Elem)
{
	fprintf(to, "%s", Elem);
}
