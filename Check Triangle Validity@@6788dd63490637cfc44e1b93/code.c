#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d",&num1, &num2, &num3);
    if(num3*num3==(num2*num2)+(num1*num1)){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}