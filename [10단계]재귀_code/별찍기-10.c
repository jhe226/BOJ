#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void star(int n, int row, int col) {
	if (row / n % 3 == 1 && col / n % 3 == 1) printf(" ");
	else if (n / 3 == 0) printf("*");
	else star(n / 3, row, col);
}

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N;j++)
			star(N, j, i);
		printf("\n");
	}
}