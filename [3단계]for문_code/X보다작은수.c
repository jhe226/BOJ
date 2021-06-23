#include<stdio.h>

int main()
{
	int N, X;
	scanf_s("%d %d", &N, &X);

	for (int i = 1; i <= N; i++)
	{
		int A;
		scanf_s("%d ", &A);

		if (A < X)
			printf("%d ", A);
	}

}