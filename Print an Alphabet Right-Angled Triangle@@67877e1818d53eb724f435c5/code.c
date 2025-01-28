#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=(int)'A'; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}