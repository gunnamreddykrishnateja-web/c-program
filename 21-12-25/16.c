#include <stdio.h>
#include<string.h>
int main() {
    char a[500];
    scanf("%s",&a);
    if(strlen(a)>=8){
        printf(" Strong Password");
    }
    else if(strlen(a)>=5){
        printf(" Medium Password");
    }
    
    else {
        printf("Weak Password");
    }
    return 0;
}