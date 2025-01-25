#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    int new1;
    new1 = num1;
    num1 = num2;
    num2 = new1;
    printf("%d %d",num1, num2);

    return 0;
}