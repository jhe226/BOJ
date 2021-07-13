#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
long long 형식의 변수 :  %u %lld , %lli , %llo , %llu , %llx를 이용하여 출력

%u : long long을 +- 부호 없는 정수로 출력하고 싶을 때
%lld : signed long long 변수를 출력할 때 사용
%lli : long long 변수를 10진수로 출력함
%llo : long long 변수를 8진수로 출력함
%llu : unsigned long long 변수를 출력할 때 사용
%llx : long long 변수를 16진수로 출력함

*/

typedef long long int ll;

ll min, max;
int check[1000001];

int main() {
	int ans = 0;

	scanf("%lld %lld", &min, &max);

	// 제곱수의 개수를 빼서 제곱ㄴㄴ수 구하기
	// i = 2의 제곱수부터 i * i가 max까지 지우기
	// check[] = 0 -> 제곱ㄴㄴ수

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