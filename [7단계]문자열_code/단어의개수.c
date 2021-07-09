#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char a[1000001] = { NULL };
	int cnt = 0;

	scanf("%[^\n]s", a, sizeof(a));
	int len = strlen(a);

	for (int i = 0; i < len; i++)
	{
		if (a[i] == ' ')
			cnt++;
	}

	if (a[0] == ' ' && a[len - 1] == ' ')
		printf("%d\n", cnt - 1);
	else if (a[0] == ' ' || a[len - 1] == ' ')
		printf("%d\n", cnt);
	else
		printf("%d\n", cnt + 1);
}