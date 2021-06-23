#include<stdio.h>

int main() {
	int A, B, T;
	scanf_s("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A+B);
	}

}