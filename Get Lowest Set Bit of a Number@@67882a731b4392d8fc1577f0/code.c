#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int pos = 0;
    while(num & 1){
        pos++;
        num>>=1;
    }
    printf("%d", pos);
    return 0;
}