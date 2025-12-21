#include <stdio.h>
int main() {
   int a,b;
    scanf("%d",&a);
    if(a>=30000){
        b=(a/100)*10;
        printf("%d",a+=b);
    }
    else {
        b=(a/100)*15;
        printf("%d",a+=b);

    }
    
    return 0;
} 