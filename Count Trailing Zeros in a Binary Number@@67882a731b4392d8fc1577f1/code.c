#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int count;
    while(!(num & 0x8000000000)){
        count++;
        num>>=1;
    }
    printf("%d",count);
    return 0;
}