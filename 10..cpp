//10] Write a function in C that takes an integer and returns its square.

#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Square of %d is: %d\n", num, square(num));

    return 0;
}
