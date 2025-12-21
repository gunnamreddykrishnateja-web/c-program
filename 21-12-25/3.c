#include <stdio.h>
int main() {
   int a;
    scanf("%d",&a);
    if(a<=100){
        printf("%d",a*=1);
    }
    else {
printf("%d",a=100+((a-100)*2));
    }
    
    return 0;
}