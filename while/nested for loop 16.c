#include <stdio.h>
int main() {
for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i==1){
                printf("A");
            }
            else if(i==2){
                printf("B");
            }
            else if(i==3){
                printf("C");
            }
            else if(i==4){
                printf("D");
            }
            else if(i==5){
                printf("E");
            }
        }
        printf("\n");
    }
    return 0;
}