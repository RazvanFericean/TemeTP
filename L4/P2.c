#include<stdio.h>
#include<stdlib.h>
void suma(int* s, int* v)
{
	int i;
	for (i = 0; i < 5; i++)
		*s = *s + v[i];
}
int main()
{
	int* v[5] = { 2, 4, 6, 0, 1 };
	int* s = 0;
	suma(&s, &v);
	printf("suma este: %d", s);
	return 0;
	system("pause");
}