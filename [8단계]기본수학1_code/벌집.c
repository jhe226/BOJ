#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	/*
		공차가 6인 계차수열 bk 이용 -> an = a1 + (시그마)bk
		bk = 6(k-1)
		a1 = b1 = 1
	*/

	int a1 = 1, b1 = 1, k = 1;
	int a2 = a1 + b1;
	int an = a2;

	while (1)
	{
		if (n == a1)
		{
			printf("%d\n", a1);
			break;
		}

		else if (n <= 6 * k + an - 1)
		{
			printf("%d\n", k+1);
			break;
		}

		else
		{
			an += 6 * k;
			k++;
		}
	}

}