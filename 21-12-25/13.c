#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0&&a>0){
        printf("Even Positive");
    }
    else if(a%2!=0&&a>0){
        printf("Odd Positive ");
    }
    else if(a%2!=0&&a<0){
        printf("Odd  Negative. ");
    }
    else{
        printf("Even Negative.");
    }
    return 0;
}