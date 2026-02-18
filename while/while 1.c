#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1;
    int count=0;
    while(i<=n){
        int noise;
        scanf("%d",&noise);
        if(noise>70){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}