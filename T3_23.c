#include<stdio.h>

void findMinMax(int arr[], int n, int i, int *min, int *max) {
    if (i >= n) return;
    if (arr[i] > *max) *max = arr[i];
    if (arr[i] < *min) *min = arr[i];
    findMinMax(arr, n, i + 1, min, max);
}

int main() {
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    findMinMax(arr, n, 1, &min, &max);
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}