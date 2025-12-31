#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    int x=0;
    scanf("%d",&n);
    while(n!=0){
        int y=n%10;
        x=x*10+y;
        n=n/10;
    }
    printf("%d ",x);
    return 0;
}