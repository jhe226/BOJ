#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factorial(int n) {
	if (n == 0 || n == 1)
	{
		return 1;
	}

	else if (n > 1) {
		return n * factorial(n - 1);
	}

	else {
		printf("ERROR! AN INTEGER MUST BE GREATER THAN 0\n");
	}
}

int main() {
	int N;
	scanf("%d", &N);

	printf("%d\n", factorial(N));
}