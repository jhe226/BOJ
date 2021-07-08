#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hansu(int x) {
	int cnt = 0;

	if (x >= 100)
	{
		cnt = 99;
		for (int i = 100; i<=x;i++)
		{
			if (((i / 100) - ((i % 100) / 10)) == (((i % 100) / 10) - (i % 10)))
				cnt++;
		}
		printf("%d", cnt);
	}

	else
	{
		cnt = x;
		printf("%d", cnt);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	hansu(N);
}