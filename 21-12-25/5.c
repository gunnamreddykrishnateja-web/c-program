#include <stdio.h>
#include <string.h>
int main (){
    int a;
    char b[10];
    scanf("%s",b);
    scanf("%d",&a);
    if(a==1234&&(strcmp(b,"admin")==0)){
        printf( "Login Successful.");
    }
    else{
        printf( "Login  Failed.");
    }
    return 0;
}