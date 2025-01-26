#include <stdio.h>

int main() {
    int numb, bit;
    scanf("%d %d",&numb, &bit);
    int mask = 1<<bit;
    int result = mask | numb;
    printf("%d",result);
    return 0;
}