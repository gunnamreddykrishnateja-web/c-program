#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i==1&&j==1){
                printf("E");
            }
            else if(i==2){
                if(j==1){
                    printf("D");
                }
                else if(j==2){
                    printf("E");
                }
            }
            else if(i==3){
                if(j==1){
                    printf("C");
                }
                else if(j==2){
                    printf("D");
                }
                else if(j==3){
                    printf("E");
                }
            }
              else if(i==4){
                if(j==1){
                    printf("B");
                }
                else if(j==2){
                    printf("C");
                }
                else if(j==3){
                    printf("D");
                }
                else if(j==4){
                    printf("E");
                }
            }
            else if(i==5){
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
    }
    printf("\n");
    }
    return 0;
}