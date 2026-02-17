#include <stdio.h>
int main() {
    for (int i=1;i<=7;i++){
        for (int j=1;j<=7;j++){
            if(i==1||i==7){
                printf("4 ");
            }
            else if(j==1||j==7){
                printf("4 ");
            }
            else if(i==2||i==6){
                printf("3 ");
            }
            else if(j==2||j==6){
                printf("3 ");
            }
            else if(i==3||i==5){
                printf("2 ");
            }
            else if(j==3||j==5){
                printf("2 ");
            }
            else if(i==4&&j==4){
                printf("1 ");
            }
        } 
        printf("\n");
    }
    
    return 0;
}