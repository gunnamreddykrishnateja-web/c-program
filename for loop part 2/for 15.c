#include <stdio.h>
int main() {
    int a;
    int r;
    scanf("%d",&a);
    int count=1;
    for (int i=0;i<a;i++){
        for(int j=1;j<=i;j++){
            if(a%j==0){
                printf("%d\n",count);
                count++;
            }
        }
        
    }
   printf("%d",count);
    return 0;
}