#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
   int r;
   if(num1>num2){
    for(int i=1;i<=num1;i++){
        if((num1%i==0)&&(num2%i==0)){
            r=i;
        }
    }
    }
   else if(num1<num2){
    for(int i=1;i<=num2;i++){
        if((num1%i==0)&&(num2%i==0)){
            r=i; 
        }
    }
    }
    printf("%d",(num1*num2)/r);
    return 0;
}
