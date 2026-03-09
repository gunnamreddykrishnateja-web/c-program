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
    
    int unique=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 int sum=1;
                for(int k=j;k<c;k++){
                    if(arr[i][j]!=arr[i][k]){
                        sum++;
                    }
                }
        
            if(sum==c){
            unique++;
            }
        }
    }
   printf("     %d",unique);
    return 0;
}