#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d",&num1, &num2, &num3);
    int avg;
    avg = num1+num2+num3/3;
    printf("Average: %d.00",avg);
    return 0;
}