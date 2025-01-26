#include <stdio.h>

int main() {
    int num1, num2;
    float add, minus, prod, div;
    char ch;
    scanf("%d %d %c",&num1, &num2, &ch);
    add = num1+num2;
    minus = num1-num2;
    prod = num1*num2;
    div = num1/num2;
    if(ch=='+'){
        printf("%f",(int)add);
    }else if(ch=='-'){
        printf("%f",(int)minus);
    }else if(ch=='*'){
        printf("%f",(int)prod);
    }else if(ch=='/'){
        printf("%f",(int)div);
    }
    return 0;
}