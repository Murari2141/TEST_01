// 15] Write a C program that uses a for loop to calculate the sum of the first 10 natural numbers.

#include <stdio.h>
int n;
int main() {
    
    printf("ENTER YOUR NUMBER :");
    scanf("%d",&n);
    int sum = n * (n + 1) / 2;
    printf("Sum of first 10 natural numbers: %d\n", sum);
    return 0;
}

