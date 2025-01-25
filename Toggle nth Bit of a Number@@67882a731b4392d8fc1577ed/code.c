#include <stdio.h>

int main() {
    int numb, n;
    scanf("%d %d",&numb, &n);
    int mask = (1 << n);
    int mask2 = ~(1 << n);
    int result;
    if(((numb>>n)&1)==0){
        result = mask&numb;
    }else{
        result = mask2&numb;
    }
    printf("%d",result);
    return 0;
}