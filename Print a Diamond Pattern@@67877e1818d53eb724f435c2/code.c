#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++){
        for(int sp2=1; sp2<=i; sp2++){
            printf(" ");
        }
        for(int j=1; j<=2*(n-i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}