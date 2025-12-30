#include <stdio.h>
int main() {
    //Your Code goes here!
    int count=0;
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    if(num==0)
{
    count=1;
}
else 
while (num!=0){
    num/=10;
    count++;
}
printf("%d",count);



    
    return 0;
}