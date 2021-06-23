#include<stdio.h>

int main() {
	int A, B;
	scanf_s("%d %d", &A, &B);

	if (A >= -10000)
	{
		if (A <= 10000)
		{
			if(B>=-10000)
				if (B <= 10000)
				{
					if (A > B)
						printf(">");
					else if (A < B)
						printf("<");
					else
						printf("==");
				}
		}
	}
}