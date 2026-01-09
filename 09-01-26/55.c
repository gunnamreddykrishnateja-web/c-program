#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    fgets(name,100,stdin);
    int count=0;
   
    for(int i=0;strlen(name)>i;i++){
        if(name[i]==' '){
count++;
        }
        
    }
    printf("%d",count);
    return 0;
}