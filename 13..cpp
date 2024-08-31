// 13] Write a C program to find the smallest element in an array of integers.
#include <stdio.h>

int find_smallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = find_smallest(arr, n);
    printf("Smallest element: %d\n", smallest);

    return 0;
}

