#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,x=0;
    scanf("%d",&n);
    if(n<=1){
        x=1;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            x=1;
            break;
    }
    }if(x==0){
        printf("prime");
    }
    else {
        printf("not prime");
    }
    
    return 0;
}