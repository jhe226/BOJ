#include<stdio.h>

int main() {
	int H, M;
	scanf_s("%d %d", &H, &M);

	if (M < 45)
	{
		if(H > 0)
			printf("%d %d", (H - 1), (M + 15));
		else
			printf("%d %d", 24 + (H - 1), (M + 15));
	}
	else
	{
		printf("%d %d",H,(M-45));
	}
}