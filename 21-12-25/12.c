#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<12){
        printf(" ticket price is 50");
    }
    else if(a<60){
        printf("ticket price is 100");
    }
    
    else {
        printf("ticket price is 70");
    }
    return 0;
}