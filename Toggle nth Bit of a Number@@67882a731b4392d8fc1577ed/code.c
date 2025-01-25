#include <stdio.h>

int main() {
    int numb, n;
    scanf("%d %d",&numb, &n);
    int mask = (1 << n);
    int result = mask^numb;
    printf("%d",result);
    return 0;
}