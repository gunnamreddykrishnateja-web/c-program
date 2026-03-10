#include <stdio.h>
#include <limits.h>
int main() {
    int r, c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0,index=0;
    for (int i=0;i<r;i++) {
        int even_count=0,odd_count=0,alter_count=0;
        for (int j=0;j<c;j++) { 
            if(arr[i][j]%2==0){
                even_count=0;
            }
            else{
                odd_count++;
            }
            if((even_count==odd_count||even_count==odd_count+1)||(odd_count==even_count||odd_count==even_count+1)){
                alter_count++;
            }
            else{
                alter_count=0;
            }
            if(count<alter_count){
                count=alter_count;
                index=i;
            }
        }
    }
    printf("              %d",index);
    return 0;
}
