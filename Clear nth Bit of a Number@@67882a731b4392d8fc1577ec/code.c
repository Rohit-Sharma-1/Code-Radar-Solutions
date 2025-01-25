#include <stdio.h>

int main() {
    int numb, nth_bit;
    int mask;
    scanf("%d %d",&numb, &bit);
    mask = ~(1 << nth_bit);
    int result;
    result = mask & numb;
    printf("%d",result);
    return 0;
}