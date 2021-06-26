#include<stdio.h>

int main()
{
	int n;
	float score[1000];
	float sum = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%f", &score[i]);
	}

	int M = score[0];

	for (int i = 1; i < n; i++)
	{
		if (M < score[i])
			M = score[i];
	}

	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / M * 100;
		sum += score[i];
	}

	printf("%.2f\n", sum / n);
}