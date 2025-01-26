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
        printf("%d",(int)add);
    }else if(ch=='-'){
        printf("%d",(int)minus);
    }else if(ch=='*'){
        printf("%d",(int)prod);
    }else if(ch=='/'){
        printf("%d",(int)div);
    }else{
        printf("Error");
    }
    return 0;
}