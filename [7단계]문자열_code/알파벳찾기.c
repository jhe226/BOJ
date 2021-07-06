#include<stdio.h>
#include<string.h>

int main()
{
	char s[100] = { NULL };
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	char check[27] = "abcdefghijklmnopqrstuvwxyz";

	scanf_s("%s",s,sizeof(s));

	for (int i = 0;i<26;i++)
	{
		for (int j = 0; j < strlen(s);j++)
		{
			if (alphabet[i] == s[j]) {
				alphabet[i] = j;
				break;
			}
		}
		if (alphabet[i] != check[i])
			printf("%d ", alphabet[i]);
		else
			printf("%d ", -1);
	}
	printf("\n");
}