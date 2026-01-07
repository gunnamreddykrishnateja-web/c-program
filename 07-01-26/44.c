#include <stdio.h>
int main() {
    int n, a[100], max, second;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = second = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        } else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }
    printf("%d", second);
    return 0;
}
