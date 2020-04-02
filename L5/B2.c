#include<stdlib.h>
#include<stdio.h>

int top = -1, st[50];
void Push(int x)
{
	st[++top] = x;
}
int Pop()
{
	return st[top--];
}
int Peek()
{
	return st[top];
}
int main()
{
	int c, n, i, x;
	scanf("%d", &c);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x&(1<<(c)))
		{
			Push(x);
		}
	}
	while (top != -1)
	{
		printf("%d ", Peek());
		Pop();
	}
	return 0;
	system("pause");
}