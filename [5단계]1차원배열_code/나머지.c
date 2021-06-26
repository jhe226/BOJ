#include<stdio.h>
int n, cnt, a[42];
int main() {
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n);
		a[n % 42]++;
	}
	for (int i = 0; i < 42; i++)
		if (a[i] > 0) cnt++;
	printf("%d\n", cnt);
}