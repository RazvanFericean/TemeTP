#include<stdio.h>
#include<stdlib.h>
int main() {
	int V[32], i, k, num;
	int v[] = { 3, 20, 39, 147, 854 };
	for (i = 0; i < 32; i++)
		V[i] = 0;
	for (i = 0; i < 5; i++)
	{
		num = v[i] / 32;
		k = v[i] % 32;
		V[num] |= 1 << k;
	}
	for (i = 0; i < 5; i++)
	{
		num = v[i] / 32;
		k = v[i] % 32;
		if (V[num] & (1 << k))
		{
			printf("%d ", v[i]);
		}
	}
	return 0;
	system("pause");
}