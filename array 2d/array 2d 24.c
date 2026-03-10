#include <stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for (int i=0;i<r;i++) {
        int m=0;
        for (int j=0;j<c;j++) {
            int prime_count=0;
            if(arr[i][j] > 1){
                for(int k=1;k<=arr[i][j]/2;k++){
                    if(arr[i][j]%k==0){
                        prime_count++;
                    }
                }
                if(prime_count==1){
                    m++;
                }
            }
        }
        if (m==c){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}