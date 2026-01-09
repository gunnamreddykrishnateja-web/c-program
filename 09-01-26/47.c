#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    scanf("%s",name);
    char copy_name[100];
    scanf("%s",copy_name);
    if(strcmp(copy_name,name)==0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}