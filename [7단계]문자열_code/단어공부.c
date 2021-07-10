#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char a[1000001] = { NULL };

	scanf("%s", a, sizeof(a));
	int len = strlen(a);

	for (int i = 0; i < len; i++)
	{
		if (a[i] >= 97)
			a[i] -= 32;
	}

	int cnt[27] = { NULL };

	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (a[j] == i+65)
				cnt[i]++;
		}
	}

	int max = 0;
	for (int i = 0; i < 27; i++)
	{
		if (max < cnt[i])
			max = cnt[i];
	}

	int max_cnt = 0, max_alpha = 0;
	for (int i = 0; i < 27; i++)
	{
		if (cnt[i] == max)
		{
			max_cnt++;
			max_alpha = i;
		}
	}

	if (max_cnt == 1)
	{
		printf("%c", max_alpha+65);
	}
	else
	{
		printf("?\n");
	}

}