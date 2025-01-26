#include <stdio.h>

int main() {
    int numb;
    scanf("%d",&numb);
    if((numb%5==0)&&(numb%3==0)){
        printf("Divisible by Both");
    }else if(numb%5==0){
        printf("Divisible by 5");
    }else if(numb%3==0){
        printf("Divisible by 3");
    }else{
        printf("Not Divisible");
    }
    return 0;
}