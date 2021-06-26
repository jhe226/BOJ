#include<stdio.h>

int main()
{
	int C;
	scanf_s("%d", &C);
	for (int i = 1; i <= C;i++)
	{
		int N;
		int cnt = 0;
		double score[1000];
		double sum = 0, avr;

		scanf_s("%d", &N);

		for (int j = 0; j < N; i++)
		{
			scanf_s("%lf", &score[j]);
			sum += score[j];
		}
		avr =sum / N;
		for (int j = 0; j < N;j++)
		{
			if (avr<score[j])
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt/N*100);
	}

	return 0;

}