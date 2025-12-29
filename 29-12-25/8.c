#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 11 == 0)
        printf("Yes");
    else
        printf("Not Divisible");
    return 0;
}
