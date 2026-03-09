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
    int prime_count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             int count=0;
            for(int k=1;k<=arr[i][j];k++){
                if(arr[i][j]%k==0){
                    count++;  
                }
            }printf("                                              %d\n\n",count);
        if(count==2){
            prime_count++;
        }
        }
    }
    
   printf("     \n%d",prime_count);
    return 0;
}