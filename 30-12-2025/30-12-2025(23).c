 #include <stdio.h>
int main() {
    int d,n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        d=n%100;
        sum=sum+d;
        n=n/100;
    }
    printf("%d",sum);
    
    return 0;
}
    