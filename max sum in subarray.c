#include <stdio.h>
#include <stdlib.h>
int maxSubArraySum(int a[], int size, int *begin, int *end) {
	int max_so_far = 0, max_end = 0;
	int i, current_index = 0;
	for (i = 0; i < size; i++) {
		max_end = max_end + a[i];
		if (max_end <= 0) {
			max_end = 0;
			current_index = i + 1;
		} else if (max_so_far < max_end) {
			max_so_far = max_end;
			*begin = current_index;
			*end = i;
		}
	}
	return max_so_far;
}
int main() {
	int arr[] = {
		10, -2, 15, 9, -8, 12, 20, -5
	}
	;
	int start = 0, end = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf(" The max sum is %d", maxSubArraySum(arr, size, &start, &end));
	printf(" The begin and End are %d & %d", start, end);
	getchar();
	return 0;
}
