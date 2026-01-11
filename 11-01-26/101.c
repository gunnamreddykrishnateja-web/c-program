#include <stdio.h>
#include <string.h>
int main() {
    char ch[100];
    fgets(ch,100,stdin);
    char ch2[strlen(ch)];
    int index=0;
   /* for(int i=strlen(ch)-1;i>=0; i--){
        ch2[index]=ch[i];
        index++;
    }*/
    for(int i=strlen(ch2); i>=0;i++){
        printf("%c ",ch2[i]);}
    printf("%s",ch2[index]) ;
    return 0;
}