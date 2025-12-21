#include <stdio.h>
int main() {
   int a,b;
    scanf("%d",&a);
    if(a>=10000){
        b=(a/100)*20;
        printf("%d",a-=b);
    }
    else if(a>=5000&&a<10000) {
        b=(a/100)*10;
        printf("%d",a-=b);

    }
    else{
        b=(a/100)*5;
        printf("%d",a-=b);
    }
    return 0;
} 