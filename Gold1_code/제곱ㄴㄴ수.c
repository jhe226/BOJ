#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
long long ������ ���� :  %u %lld , %lli , %llo , %llu , %llx�� �̿��Ͽ� ���

%u : long long�� +- ��ȣ ���� ������ ����ϰ� ���� ��
%lld : signed long long ������ ����� �� ���
%lli : long long ������ 10������ �����
%llo : long long ������ 8������ �����
%llu : unsigned long long ������ ����� �� ���
%llx : long long ������ 16������ �����

*/

typedef long long int ll;

ll min, max;
int check[1000001];

int main() {
	int ans = 0;

	scanf("%lld %lld", &min, &max);

	// �������� ������ ���� ���������� ���ϱ�
	// i = 2�� ���������� i * i�� max���� �����
	// check[] = 0 -> ����������

	for (ll i = 2; i * i <= max; i++)
	{
		ll num = i * i - min % (i * i);

		if (num == i * i)
			num = 0;

		for (ll j = num; j <= max - min; j += (i * i))
		{
			check[j] = 1;
		}
	}
	
	for (int i = 0; i <= max - min; i++)
	{
		ans += !check[i];
	}
	printf("%d\n", ans);

	return 0;
}