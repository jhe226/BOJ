#include<stdio.h>

int main()
{
	int arr[9];
	int cnt = 0;

	for (int i = 1; i <= 9;i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];

	for (int i = 1; i <= 9;i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 9;i++)
	{
		if (max != arr[i])
			cnt++;
		else
			break;
	}

	printf("%d\n%d", max, cnt);
}