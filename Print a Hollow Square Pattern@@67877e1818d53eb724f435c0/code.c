#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i==1||i==n){
            for(int j=1;j<=n; j++){
                printf("*");
            }
        }
        for(int l=1; l<=n; l++){
            if(int k==1||k==n){
                printf("*");
            }
        }
        
    }
    return 0;
}