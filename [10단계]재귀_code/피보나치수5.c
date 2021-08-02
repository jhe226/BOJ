#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Fibo(int n) {
	if (n == 0)
	{
		return 0;
	}

	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (n > 2)
	{
		return Fibo(n - 2) + Fibo(n - 1);
	}
}

int main() {
	int N;
	scanf("%d", &N);

	printf("%d\n", Fibo(N));
}