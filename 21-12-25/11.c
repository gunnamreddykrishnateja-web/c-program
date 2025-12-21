#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==5){
        printf("Print bonus amount is 5000");
    }
    else if(a==4){
        printf("Print bonus amount is 3000");
    }
    else if(a==3){
        printf("Print bonus amount is 1000");
    }
    else {
        printf("Print bonus amount is 0");
    }
    return 0;
}