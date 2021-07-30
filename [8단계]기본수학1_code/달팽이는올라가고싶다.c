#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int A, B, V;
	scanf("%d %d %d",&A, &B, &V);
	int day = (int)ceil(((double)V - A) / ((double)A - B));
	printf("%d\n", day + 1);
}