#include <stdio.h>
#include <string.h>

int main() {
    int num, bit;
    int nth_bit;
    scanf("%d %d",&num, &bit);
    nth_bit = (num >> bit) & 1;
    printf("%d",nth_bit);
    return 0;
}