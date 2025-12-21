#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=(b+500)){
        printf(" Success");
    }
    else{
        printf(" Failed.");
    }
    return 0;
}