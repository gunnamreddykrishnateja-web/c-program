#include <stdio.h>
#include<limits.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=INT_MIN,index;
    for(int i=0;i<c;i++){
        int product=1;
        for(int j=0;j<c;j++){
            product*=arr[i][j];
        }
        if(max<product){
               max=product;
               index=i;
            }
    }
   printf("     %d",index);
    return 0;
}