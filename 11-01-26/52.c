#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    scanf("%s",name);
    char rev_name[100];
    strcpy(rev_name,name);
    strrev(rev_name);
   // printf("%s\n",rev_name);
    //if(name==rev_name){
    if(strcmp(name,rev_name)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}