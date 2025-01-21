#include <stdio.h>

int main() {
    float rad;
    float pi = 3.14;
    scanf("%f",&rad);
    float area;
    area = pi*rad**2;
    printf("Area: %.2f",area);
    return 0;
}