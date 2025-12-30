#include <stdio.h>
int main() {
    //Your Code goes here!
    int i,n;
    scanf("%d",&n);
     long long fact=1;
    for(i=1;i<=n;i++){
        
        fact=fact*i;
        printf("%lld\n",fact);
    }
    
    return 0;
}