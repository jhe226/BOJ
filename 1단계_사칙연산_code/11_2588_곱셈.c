#include<stdio.h>

int main() {
	int A, B;
	scanf_s("%d\n%d", &A, &B);
	printf("%d\n", A*(B%10));
	printf("%d\n", A*((B/10)%10));
	printf("%d\n", A*((B/100)%10));
	printf("%d\n", A*B);
}