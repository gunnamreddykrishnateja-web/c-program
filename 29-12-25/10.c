#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 75)
        printf("Grade A");
    else if (marks >= 50)
        printf("Grade B");
    else
        printf("Grade C");
    return 0;
}
