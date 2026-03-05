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
    int value=0,max=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            for(int k=i+1;k<r;k++){
                for(int l=0;l<c;l++){
                    if(arr[i][j]==arr[k][l]){
                       printf("    %d",arr[i][j]);
                    }
                }
            }
        // if(count!=0&&count>max){
        //         value=arr[i][j];
            }
    
    }
//    printf("     %d",value);
    return 0;
}