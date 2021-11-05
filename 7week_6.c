#include <stdio.h>
int main(void)
{
	int i, j = 0;
	int x = 0;
	for (i = 0; i < 5; i++) {
		printf("Enter the numbers(each between 1 and 30): ");
		scanf_s("%d", &x);
		if (x >= 1 && x <= 30) {
			for (j = 0; j < x; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
			printf("\nEnter the number between 1 and 30!\n\n");
	}
}