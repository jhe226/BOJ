#include<stdio.h>

int main()
{
	int N;
	int arr[100];

	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int min = 1000000;
	int max = -1000000;

	for (int i = 1; i <= N; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d %d\n", min, max);
}