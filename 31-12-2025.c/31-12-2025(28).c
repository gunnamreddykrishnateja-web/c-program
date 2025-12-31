#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    for( int i=n;i<n+26;i++){
        printf("%d %c\n",i,i);
    }
    
    return 0;
}