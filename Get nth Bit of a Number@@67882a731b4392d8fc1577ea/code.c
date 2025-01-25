#include <stdio.h>
#include <string.h>

int main() {
    int num bit;
    char str[50];
    scanf("%d %d",&num, &bit);
    sprintf(str, "%d", num);
    int numlen;
    numlen = strlen(num);
    printf("%d",numlen);
    return 0;
}