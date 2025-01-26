#include <stdio.h>

int main() {
    int num1, num2, add, minus, prod, div;
    char ch;
    scanf("%d %d %c",&num1, &num2, &ch);
    add = num1+num2;
    minus = num1-num2;
    prod = num1*num2;
    div = num1/num2;
    if(ch=='+'){
        printf("%d",add);
    }else if(ch=='-'){
        printf("%d",minus);
    }else if(ch=='*'){
        printf("%d",prod);
    }else if(ch=='/'){
        printf("%d",div);
    }
    return 0;
}