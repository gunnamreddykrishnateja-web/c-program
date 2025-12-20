#include <stdio.h>
int main() {
   char a;
    scanf("%c",&a);
    if((a>=65&&a<=90)||(a>=96&&a<=112)){
        printf("Alphabet");
    }
    else if(a>=48&&a<=57){
        printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
}