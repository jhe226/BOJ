#include<stdio.h>

int main()
{
	int T, A[1000], B[1000];

	scanf_s("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf_s("%d %d", &A[i], &B[i]);
	}

	for (int i = 1; i <= T; i++)
	{
		printf("Case #%d: %d + %d = %d\n", i, A[i], B[i], A[i] + B[i]);
	}
	
}