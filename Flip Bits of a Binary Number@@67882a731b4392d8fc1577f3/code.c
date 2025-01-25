#include <stdio.h>

int main() {
    int numb;
    scanf("%d",&numb);
    int result = ~numb;
    printf("%d",result);
    return 0;
}