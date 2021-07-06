#include<stdio.h>

int d(int n)
{
	int arr[4];
	int sum = 0;
	arr[0] = n % 10;
	arr[1] = ((n - n % 10) % 100) / 10;
	arr[2] = n / 1000;
	arr[3] = (n - arr[2] * 1000) / 100;
	sum = n + arr[0] + arr[1] + arr[2] + arr[3];
	return sum;
	
}

int arr[10000] = { 0, };

int main()
{
	for (int i = 1; i <= 10000;i++)
	{
		if (d(i) < 10000)
		{
			arr[d(i)] = 1;
		}
	}

	for (int i = 0; i < 10000;i++)
	{
		if (arr[i] == 0)
		{
			printf("%d",i);
		}
	}
}