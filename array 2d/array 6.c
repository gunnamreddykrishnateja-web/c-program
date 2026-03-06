#include <stdio.h>  
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int m=r;
    int k=0;
    int ar[m];
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        ar[k]=sum;
        k++;
    }
    int max=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            int diff=ar[i]-ar[j];
            if(max<diff){
                max=diff;
            }
        }
    }
    printf("      %d",max);
    return 0;
}