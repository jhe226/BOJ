#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int K(int n) {
	if (n == 1) return 1;
	return 2 * K(n - 1) + 1;
}

int function(int from, int to) {
	printf("%d %d\n", from, to);
}

int Hanoi(int n, int from, int to, int by) {
	if (n > 0)
	{
		Hanoi(n - 1, from, by, to);
		function(from, to);
		Hanoi(n - 1, by, to, from);
	}

	else if (n == 1)
	{
		function(from, to);
		return;
	}
}

int main() {
	int N;
	scanf("%d", &N);

	printf("%d\n", K(N));
	Hanoi(N, 1, 3, 2);
}