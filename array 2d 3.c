#include <stdio.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0,value=0;
    
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            for(int k=j+1;k<r;k++){
                if(arr[i][j]==arr[i][k]){
                    count++;
                }
            }
            if(count!=0&&count>max){
                value=arr[i][j];
            }
        }
        
    }
   printf("     %d",value);
    return 0;
}