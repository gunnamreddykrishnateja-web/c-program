#include <stdio.h>
#include <limits.h>
int main() {
   int periods;
    scanf("%d",&periods);
    int count=0;
    int max=INT_MIN; 
    for(int i=0;i<periods;i++){
        int noise;
        scanf("%d",&noise);
        if(max<noise){
            max=noise;
        }
        if(noise>70){
            count++;
        }
    }
    printf("Maximum Noise: %d\n\nNoisy Periods: %d",max,count);
    return 0;
}