#include <stdio.h>
int main() {
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1){
                printf("A");
            }
            else if(j==2){
                printf("B");
            }
            else if(j==3){
                printf("C");
            }
            else if(j==4){
                printf("D");
            }
            else if(j==5){
                printf("E");
            }
        }
        printf("\n");
    }
    return 0;
}