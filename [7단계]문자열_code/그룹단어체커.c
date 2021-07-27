#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int N = 0;
	
	scanf("%d", &N);

	int cnt = N;

	for (int i = 0; i < N; i++)
	{
		char s[101] = { NULL };

		scanf("%s", s, sizeof(s));

		int len = strlen(s);

		for (int j = 0; j < len; j++)
		{
			int check = 0;	// 중복 방지용 변수

			if (s[j] != s[j + 1]) {	// 연속 중복X
				check = len;	// check에 특정 값 대입

				for (int k = j + 2; k < len; k++)
				{
					if (s[j] == s[k])	// 연속성 위반, 동일 문자 반복
					{
						cnt--;	// 제외
						check--;
						break;
					}
				}
				if (check != len)break;	// 체크값이 다른 경우 -> 빠져나옴, 중복 방지.
			}
		}

	}
	printf("%d\n", cnt);
}