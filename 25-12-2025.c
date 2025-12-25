#include <stdio.h>
int main() {
    int a, b, choice;
    scanf("%d %d", &a, &b);
    scanf("%d", &choice);

    if (choice == 1)
        printf("Sum = %d", a + b);
    else if (choice == 2)
        printf("Difference = %d", a - b);
    else if (choice == 3)
        printf("Product = %d", a * b);
    else if (choice == 4)
        printf("Quotient = %d", a / b);
    else
        printf("Invalid choice");

    return 0;
}
