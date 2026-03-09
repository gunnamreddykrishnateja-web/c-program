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
    int palcount=0;
    for(int i=0;i<r;i++){
        int count=0;
        int g=c;
        for(int j=0;j<g%2;j++){
            if(arr[i][j]==arr[i][r-1]){
                count++;
            }
           g--;
        }
        if(count==c%2){
            palcount++;
        }
        }
   printf("     %d",palcount);
    return 0;
}