#include<stdio.h>

int main()
{
	int N, sum = 0;
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		int a;
		scanf_s("%1d", &a);
		sum += a;
	}
	printf("%d", sum);
}