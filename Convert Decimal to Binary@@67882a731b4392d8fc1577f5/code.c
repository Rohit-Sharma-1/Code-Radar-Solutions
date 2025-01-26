#include <stdio.h>

int main() {
    int binarynum[32];
    int num, i=0;
    scanf("%d",&num);
    while(num>0){
        binarynum[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1; j>=0; j--;){
        printf("%d", binarynum[j]);
    }
    printf("\n")
    return 0;
}