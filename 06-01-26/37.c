#include <stdio.h>
int main() {
    int n, a[100], key, found = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Found");
    else
        printf("Not Found");
    return 0;
}
