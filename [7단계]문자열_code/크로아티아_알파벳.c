#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[101] = { NULL };	// 크로아티아 알파벳
	scanf("%s", s, sizeof(s));

	int cnt = 0;
	int len = strlen(s);

	for (int i = 0; i < len;)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' || (s[i + 1] == '-'))
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z' && (s[i + 2] == '='))
			{
				cnt++;
				i += 3;
			}

			else if(s[i+1]=='-')
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				cnt++;
				i += 2;
			}

			else
			{
				cnt++;
				i++;
			}
		}

		else
		{
			cnt++;
			i++;
		}
	}

	printf("%d\n", cnt);
}