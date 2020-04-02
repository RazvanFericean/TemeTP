#include<stdio.h>
#include<stdlib.h>
typedef enum {
	r,
	w,
	d,
	re,
	cpy
}permisiune;
void SetPermisiune(permisiune p, char a[], int util)
{
	//int num, k;
	//num = (p + 5 * util) / 8;
	//k = (p + 5 * util) % 8;
	//a[num] |= (1 << k);
	a[util] |= 1 << p;
}
void DezactivarePermisiune(enum permisiune p, char a[], int util)
{
	//int num, k;
	//num = (p + 5 * util) / 8;
	//k = (p + 5 * util) % 8;
	//a[num] &= (1 << k);
	a[util] &= ~(1 << p);

}
void Vizualizare(char a[])
{
	int i, k, j = 0;
	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%d", (a[i] & (1 << k)) ? 1 : 0);
			j++;
			if (j > 7)
			{
				printf(" ");
				j = 0;
			}
		}

	}
}

int main() {
	char v[8];
	int i, num, k, j = 0, n = 0;
	permisiune p;
	for (i = 0; i < 8; i++)
	{
		v[i] = 0;
	}
	SetPermisiune(r, v, 0);
	SetPermisiune(w, v, 3);
	Vizualizare(v);
	printf("\n");
	DezactivarePermisiune(w, v, 3);
	Vizualizare(v);

	return 0;
	system("pause");
}