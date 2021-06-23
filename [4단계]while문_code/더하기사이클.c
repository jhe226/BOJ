#include<stdio.h>

int main() {
	int N, N1, N2, N3, N4, result, cnt = 0;
	scanf_s("%d", &N);
	result = N;
	while (1)
	{
		N1 = N / 10;
		N2 = N % 10;
		N3 = (N1 + N2) % 10;
		N4 = N2 * 10 + N3;
		N = N4;
		cnt++;
		if (N4 == result)break;
	};
	printf("%d\n", cnt);

}