//#include <stdio.h>
//int main(void)
//{
//	int a, b, c, d, e, f, g, h, i, j = 0;
//	printf("(A)\n");
//	for (a = 0; a <= 10; a++) {
//		for (b = 0; b < a; b++) {
//			printf("%s", "*");
//		}
//		printf("\n");
//	}
//	printf("(B)\n");
//	for (c = 0; c <= 10; c++) {
//		for (d = 0; d < 10 - c; d++) {
//			printf("%s","*");
//		}
//		printf("\n");
//	}
//	printf("(C)\n");
//	for (e = 0; e < 10; e++) {
//		for (f = 0; f < e; f++) {
//			printf(" ");
//		}
//		for (g = 0; g < 10 - e; g++)
//			printf("%s", "*");
//		printf("\n");
//	}
//	printf("(D)\n");
//	for (h = 0; h < 10; h++) {
//		for (i = 1; i < 10 - h; i++) {
//			printf(" ");
//		}
//		for (j = 0; j < h + 1; j++)
//			printf("%s", "*");
//		printf("\n");
//	}
//}