#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<=25&&a>0){
        printf("%d",a=2000);
    }
   else if(a<=40&&a>25){
        printf("%d",a=4000);
    }
    else{
        printf("%d",a=6000);
    }
    return 0;
}