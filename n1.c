#include<stdio.h>
void **rrr;
int main()
{	rrr=malloc(sizeof(void **));
	*rrr=strdup("bbb");
	//free(rrr);
	return 0;
}
