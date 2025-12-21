#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=25000&&b>=700){
        printf("Eligible" );
    }
    
    else{
        printf(" Not Eligible.");
    }
    return 0;
}