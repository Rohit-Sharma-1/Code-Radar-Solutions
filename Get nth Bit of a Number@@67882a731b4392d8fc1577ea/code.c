#include <stdio.h>
#include <string.h>

int main() {
    int num bit;
    int nthbit;
    scanf("%d %d",&num, &bit);
    nthbit = (num>>bit)&1;
    printf("%d",nthbit);
    
    return 0;
}