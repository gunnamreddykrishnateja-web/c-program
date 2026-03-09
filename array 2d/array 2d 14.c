#include <stdio.h>
#include<limits.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=INT_MIN;
    int maxcol=0;
    for(int j=0;j<c;j++) {
        int sum=0;
        for(int i=0;i<r;i++) {
            sum+=arr[i][j];
        }
        if(sum>maxsum) {
            maxsum=sum;
            maxcol=j;
        }
    }
    printf("%d",maxcol);
    return 0;
}