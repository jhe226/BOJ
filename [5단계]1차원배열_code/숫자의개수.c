#include<stdio.h>

int main()
{
	int A, B, C;
	int result = 0;
	int cnt[10] = { 0 };
	int i = 0;

	scanf_s("%d %d %d", &A, &B, &C);
	result = A * B * C;

	while (result != 0)
	{
		i = result % 10;
		result /= 10;
		cnt[i]++;
	}

	for (int i = 0; i < 10;i++)
	{
		printf("%d\n", cnt[i]);
	}

}