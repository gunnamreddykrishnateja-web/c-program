#include <stdio.h>
#include<limits.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        int max=INT_MIN,min=INT_MAX;
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        if((max-min)<=1000){
        count++;
        }
    }

    printf("%d",count);
    return 0;
}