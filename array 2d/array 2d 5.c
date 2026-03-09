#include <stdio.h>
#include <limits.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }   
    int max=INT_MAX,index;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
           sum+=arr[i][j];
        }
        printf("\n\n%d\n\n",sum);
        if(max>sum){
            max=sum;
            index=i;
        }
    }   
    printf("        %d",index);
     return 0;
}