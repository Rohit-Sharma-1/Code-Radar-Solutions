#include <stdio.h>

int main() {
    int numb;
    scanf("%d",&numb);
    if((numb<=100)&&(numb>=1)){
        printf("In Range");
    }else{
        printf("Out of Range");
    }
    return 0;
}