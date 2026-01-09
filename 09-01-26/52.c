#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    scanf("%s",name);
    char rev_name[100];
    strcpy(rev_name,strrev(name));
    if(strcmp(rev_name,name)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}