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
			int check = 0;	// �ߺ� ������ ����

			if (s[j] != s[j + 1]) {	// ���� �ߺ�X
				check = len;	// check�� Ư�� �� ����

				for (int k = j + 2; k < len; k++)
				{
					if (s[j] == s[k])	// ���Ӽ� ����, ���� ���� �ݺ�
					{
						cnt--;	// ����
						check--;
						break;
					}
				}
				if (check != len)break;	// üũ���� �ٸ� ��� -> ��������, �ߺ� ����.
			}
		}

	}
	printf("%d\n", cnt);
}