#include<stdio.h>

int main()
{
	int N;
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N-i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

//	i		k(ฐ๘น้)		j(*)
//	1		  4 	     1
//	2		  3			 2
//	3		  2 		 3
//	4		  1 		 4
//	5		  0 		 5
//	i		 N-1 		 i