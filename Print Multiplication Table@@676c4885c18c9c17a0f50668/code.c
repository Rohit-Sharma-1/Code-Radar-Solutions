#include <stdio.h>

int main() {
    int n, prod;
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        prod = n*i;
        printf("%d "+"x"+" %d"+" = "+"%d\n",n,i,prod);
    }
    return 0;
}