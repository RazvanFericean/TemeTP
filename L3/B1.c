#include<stdio.h>
#include<stdlib.h>
int main()
{
	int bin1, bin2;
    int p;
	int q;
	int bin[100], i = 1, j;
	printf("Dati primul nr: ");
	scanf("%d", &bin1);
	printf("Dati al doilea nr: ");
	scanf("%d", &bin2);
	p = 0; 
	while (bin1 != 0) 
	{
		if ((bin1 & 1) != 0) 
			p = p + bin2; 

		bin2 = bin2 << 1; 
		bin1 = bin1 >> 1; 
	}

	printf("Produsul este: %d", p);
	q = p;
	while (q != 0) {
		bin[i++] = q % 2;
		q = q / 2;
	}
	printf("\nEchivalentul in binar al lui %d este:  ", p);
	for (j = i - 1; j > 0; j--)
		printf("%d", bin[j]);
	return 0;
	system("pause");
}
