#include <stdio.h>

int main() {
    float num1, num2; 
    int div, prod, add, minus;
    char ch;
    scanf("%f %f %c",&num1, &num2, &ch);
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
    }else{
        printf("error");
    }
    return 0;
}