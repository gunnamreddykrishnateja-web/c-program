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
        int count=0;
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                for (int l=0;l<c;l++){
                    if(arr[i][j]==arr[k][l]){
                        count++;
                    }
                }
            }
            if(count>max){
                max=count;
                b=arr[i][j];
            }
        }
    }
   printf("     %d",b);
    return 0;
}