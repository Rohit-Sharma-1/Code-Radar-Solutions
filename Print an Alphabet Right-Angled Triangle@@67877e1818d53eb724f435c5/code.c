#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j='A'; j<=2; j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}