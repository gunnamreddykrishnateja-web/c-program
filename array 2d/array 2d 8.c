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
    int count=0;
    
    for(int i=0;i<r;i++){
        int even_count=0,odd_count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }
        if(even_count==odd_count){
               count++;
            }
    }
   printf("     %d",count);
    return 0;
}