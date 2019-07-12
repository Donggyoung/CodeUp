#include<stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i<=n ; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1) {
				printf("*");
			}
			if (i >= 2 && i < n) {
				if (j == 1 || j == n) {
					printf("*");
				}
				else {
					printf("v");
				}
			}
			if (i == n) {
				printf("*");
			}
			
		}
		printf("\n");
	}
	return 0;
}
