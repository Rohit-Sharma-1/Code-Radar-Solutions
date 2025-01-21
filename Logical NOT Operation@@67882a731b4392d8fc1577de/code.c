#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    if(num1 !> 0){
        printf("True");
    }else if(num1 !< 0){
        printf("False");
    }
    return 0;
}