#include <stdio.h>

int main() {
    int numb, n;
    int mask;
    scanf("%d %d",&numb, &n);
    mask = ~(1 << n);
    int result;
    result = mask & numb;
    printf("%d",result);
    return 0;
}