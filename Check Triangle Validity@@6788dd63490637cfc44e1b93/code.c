#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d",&num1, &num2, &num3);
    if(pow(num3,2)==pow(num1,2)+pow(num2,2)){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}