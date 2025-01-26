#include <stdio.h>

int main() {
    int numb, bit;
    scanf("%d %d",&numb, &bit);
    int mask = numb>>bit;
    int result = mask | 1;
    int res = result<<bit;
    printf("%d",res);
    return 0;
}