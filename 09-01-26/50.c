#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    scanf("%s",name);
    int vowel_count=0;
    int constant_count=0;
    for(int i=0;strlen(name)>i;i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            vowel_count++;
        }
        else{
     constant_count++;

        }
    }
    printf("%d",vowel_count);
    return 0;
}