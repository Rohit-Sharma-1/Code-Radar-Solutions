#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num==4||num==6||num==9||num==11){
        printf("30");
    }else if(num==2){
        printf("28");
    }else{
        printf("31");
    }
    return 0;
}