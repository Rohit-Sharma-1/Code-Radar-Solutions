#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1,ch='A'; n-i+1; j++, ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}