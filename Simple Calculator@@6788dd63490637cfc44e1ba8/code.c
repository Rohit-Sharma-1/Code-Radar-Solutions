#include <stdio.h>

int main() {
    float num1, num2, add, minus, prod, div;
    char ch;
    scanf("%d %d %c",&num1, &num2, &ch);
    add = num1+num2;
    minus = num1-num2;
    prod = num1*num2;
    div = num1/num2;
    if(ch=='+'){
        printf("%f",add);
    }else if(ch=='-'){
        printf("%f",minus);
    }else if(ch=='*'){
        printf("%f",prod);
    }else if(ch=='/'){
        printf("%f",div);
    }
    return 0;
}