#include <stdio.h>

int main() {
    int binarynum[32];
    int i = 0;
    int num;
    scanf("%d",&num);
    while(num>0){
        binarynum[i] = num%2;
        num = num/2;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d", binarynum[j]);
    }
    return 0;
}