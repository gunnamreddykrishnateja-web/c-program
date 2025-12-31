#include <stdio.h>
int main() {
    //Your Code goes here!
    int n=100021;
    int rev=n;
    int x=0;
    
    
    while(n!=0){
        int y;
        
        y=n%10;
        x=x*10+y;
        n=n/10;
        
    }
    printf("%d",x);
    if(x==rev){
        printf("palidrome");
    }
    else 
    printf(" not palidrome");
    return 0;
}