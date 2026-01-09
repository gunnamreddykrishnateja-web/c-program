#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    scanf("%s",name);
    
    printf("%s",strrev(name));
    return 0;
}