#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	a1 = (a % 10) * 100;	// 1�� �ڸ� -> 100�� �ڸ�
	a2 = ((a % 100)/10)*10;	// 10�� �ڸ� -> 10�� �ڸ�
	a3 = a / 100;	// 100�� �ڸ� -> 1�� �ڸ�
	a4 = a1 + a2 + a3;

	int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	b1 = (b % 10) * 100;	// 1�� �ڸ� -> 100�� �ڸ�
	b2 = ((b % 100) / 10) * 10;	// 10�� �ڸ� -> 10�� �ڸ�
	b3 = b / 100;	// 100�� �ڸ� -> 1�� �ڸ�
	b4 = b1 + b2 + b3;

	if (a4 > b4)
	{
		printf("%d", a4);
	}

	else if(a4 < b4)
	{
		printf("%d", b4);
	}
	
}