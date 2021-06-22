#include<stdio.h>

int main() {
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%.9lf", (double)A / B);
}