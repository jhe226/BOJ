#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int dial(char str)
{
	if (str >= 'W') return 9;
	else if (str >= 'T')return 8;
	else if (str >= 'P')return 7;
	else if (str >= 'M')return 6;
	else if (str >= 'J')return 5;
	else if (str >= 'G')return 4;
	else if (str >= 'D')return 3;
	else return 2;
}

int main()
{
	int time = 0;
	char alpha[16];

	scanf("%s", alpha,sizeof(alpha));

	int len = strlen(alpha);

	for (int i = 0; i < len; i++)
	{
		time += dial(alpha[i]);
	}

	printf("%d\n", time + len);
}