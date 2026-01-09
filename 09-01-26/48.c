#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    scanf("%s",name);
    char copy_name[100];
    printf("%s",strcpy(copy_name,name));
    return 0;
}