#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int c1[256] = {0}, c2[256] = {0}, i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }
    for (i = 0; s1[i] != '\0'; i++) {
        c1[s1[i]]++;
        c2[s2[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (c1[i] != c2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
