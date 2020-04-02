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
int Palindrom(int x)
{
	int o=0,y=0;
	y = x;
	while (x!=0)
	{
		o=o*10+x % 10;
		x /=10 ;
	}
	if (y == o)
		return 1;
	else
		return 0;
}
int main()
{
	int i,n,x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > 10)
		{
			if (Palindrom(x) == 1)
			{
				Push(x);
			}
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