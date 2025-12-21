#include <stdio.h>
int main() {
   char a;
    scanf("%c",&a);
    if(a>=65&&a<=90){
        printf("uper case ");
    }
    else if(a>=96&&a<=112){
        printf("lower case");
    }
    else if(a>=48&&a<=57){
        printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
}