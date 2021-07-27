#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	/*
	A + Bx < Cx
	x > A / (C-B)
	*/

	if (B < C) printf("%d\n", A / (C - B) + 1);
	else printf("%d\n", -1);
}
