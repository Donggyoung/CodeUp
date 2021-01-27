#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int* arr;
	int temp;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	if (arr == NULL) {
		printf("malloc error");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%d\n", arr[0]);

	free(arr);
	return 0;
}