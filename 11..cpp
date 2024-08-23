//  11] Explain the difference between ++x and x++ in C with an example.

#include <stdio.h>

int main() {
    int x = 1;
    int a, b;

    a = ++x; 
    printf("After ++x: x = %d, a = %d\n", x, a);

    x = 2;   
    b = x++; 
    printf("After x++: x = %d, b = %d\n", x, b);

    return 0;
}

