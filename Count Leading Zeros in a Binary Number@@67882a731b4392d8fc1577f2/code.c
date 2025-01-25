#include <stdio.h>

int main() {
    int numb;
    scanf("%d",&numb);
    int count;
    while(!(numb & 0x8000000000)){
        count++;
        numb<<=1;
    }
    printf("%d",count);
    return 0;
}