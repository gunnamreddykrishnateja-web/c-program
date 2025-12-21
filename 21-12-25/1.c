#include <stdio.h>
int main() {
    int Marks;
    scanf("%d",&Marks);
    if(Marks>=90&&Marks<=100){
        printf("A+");
    }
    else if(Marks>=80&&Marks<90){
        printf("A");}
        else if(Marks>=70&&Marks<80){
        printf("B");}
        else if(Marks>=60&&Marks<70){
        printf("C");}
        else {
        printf("Fail");}
    return 0;
}