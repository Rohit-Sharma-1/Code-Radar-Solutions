#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int result = num & 1;
    printf("%d", result);
    return 0;
}