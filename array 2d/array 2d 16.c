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
    
    int max=INT_MIN,b;
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum+=arr[i][j];
        }
        if(max<sum&&sum!=0){
            max=sum;
            b=i;
        }
    }
   printf("     %d",b);
    return 0;
}