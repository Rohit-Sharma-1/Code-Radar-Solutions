#include <stdio.h>
#include <stdlib.h>
int main() {
    int numb is_prime = 1;
    scanf("%d",&numb);
    
    for(int i=2;i<numb;i++){
        if(numb%i==0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime){
        printf("prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}