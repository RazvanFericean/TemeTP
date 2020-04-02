#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int *s,*v;
	s = (int*)malloc(sizeof(int));
	v = (int*)malloc(5*sizeof(int));
	for (int i = 1; i <= 5; i++)
	{
		*(v + i - 1) = i;
	}
	*s = 0;
	for (i = 0; i < 5; i++)
		*s += *(v + i);
	printf("suma este: %d", *s);
	return 0;
	system("pause"); 
}