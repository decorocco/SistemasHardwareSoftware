#include <stdio.h>



int main() {
    int n;

    scanf("%d", &n);

    for(int i = 2; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            int res = i*j;
            printf("%d ", res);
        }
        printf("\n");
    }

    return 0;
}