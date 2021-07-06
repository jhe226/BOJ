#include<stdio.h>

int main()
{
	char a;

	scanf_s("%c", &a,sizeof(a));

	printf("%d\n", (int)a);
}