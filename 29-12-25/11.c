#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
        printf("Multiple of both 3 and 5");
    else
        printf("Not a multiple of both 3 and 5");
    return 0;
}
