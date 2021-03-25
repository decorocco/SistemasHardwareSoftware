#include <stdio.h>

int ex4(int a, int b) {
    return a*b + 32;
}   

int main() {
    int c = ex4(2, 5);
    int d = ex4(2, 2);
    printf("%d\n", c + d);
    return d;
}