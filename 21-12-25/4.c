#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf(" triangle is Equilateral");
    
    }
    else if(a==b||b==c){
        printf(" triangle is  Isosceles");
    }
    else{
        printf(" triangle is   Scalene.");
    }

    return 0;
}