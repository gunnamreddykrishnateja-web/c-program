#include <stdio.h>
int main() {
    int a;
    int r;
    scanf("%d",&a);
    int sum=0;
    int fact=1;
    for (int i=a;i>0;i/10){
        r=a%10;
         for(int j=1;j<=r;j++){
           fact*=j;
    }
    printf("%d ",fact);
    sum+=fact;
    printf("%d ",sum);
        a=a/10;
        if(a==0){
            break;
        }
    }
   //printf("%d",count);
    return 0;
}