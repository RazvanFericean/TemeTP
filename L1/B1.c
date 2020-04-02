#include<stdlib.h>
#include<stdio.h>
void cautare_liniara(int v[20], int n)
{
	int e, ok = 0,i;
	printf("Dati elementul pe care doriti sa-l cautati: ");
	scanf("%d", &e);
	for (i = 0; i < n&&ok==0; i++)
	{
		if (v[i] == e)
		{
			printf("Elementul a fost gasit la pozitia %d\n", i + 1);
			ok = 1;
		}
	}
	if (ok == 0)
		printf("Elementul nu a fost gasit");
}
void cautare_binara(int v[20], int n)
{
	int pi, pf, k,e, ok=0;
	pi = 0;
	pf = n;
	printf("Dati elementul pe care doriti sa-l cautati: ");
	scanf("%d", &e);
	while (pi <= pf)
	{
		k = (pi + pf) / 2;
		if (v[k] == e)
		{
			printf("Elementul a fost gasit la pozitia %d\n", k + 1);
			ok = 1;
			break;
		}
		else if (e < v[k])
		{
			pf = k - 1;
		}
		else
		{
			pi = k + 1;
		}
	}
	if (ok == 0)
		printf("Elementul nu a fost gasit");
}
int main()
{
	int opt, v[20], n, i;
	printf("Dati nr de elemente ale vectorului: \n");
	scanf("%d", &n);
	printf("Dati elementele vectorului: ");
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	do
	{
		printf("1.Cautare liniara \n");
		printf("2.Cautare binara \n");
		printf("3.Iesire\n");
		printf("Dati optiunea:");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1: cautare_liniara(v, n); break;
		case 2: cautare_binara(v, n);  break;
		case 3: exit(0);  break;
		default: printf("optiune gresita"); break;
		}

	} while (1);
	system("pause");
}