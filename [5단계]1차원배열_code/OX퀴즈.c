#include<stdio.h>
#include<string.h>

int main() {
	int n;
	char arr[80];
	scanf_s("%d", &n);

	for (int i = 0; i < n;i++)
	{
		scanf_s("%s", arr, sizeof(arr));

		int len = strlen(arr);
		int score = 0;
		int cnt = 0;

		for (int i = 0; i < len; i++)
		{
			if (i == 0 && arr[i] == 'O')
				score += ++cnt;
			else if (arr[i] == arr[i - 1] && arr[i] == 'O')
				score += ++cnt;
			else if (arr[i] == 'O')
				score += ++cnt;
			else if (arr[i] == 'X')
				cnt = 0;

		}
		printf("%d\n", score);
	}

	return 0;
}