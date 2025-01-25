#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int result = num & -num;
    printf("%d", result);
    return 0;
}