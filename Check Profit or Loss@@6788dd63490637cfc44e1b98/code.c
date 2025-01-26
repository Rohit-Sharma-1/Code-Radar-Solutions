#include <stdio.h>

int main() {
    int costp sellp;
    scanf("%d %d",&costp, &sellp);
    if(costp>sellp){
        printf("Loss");
    }else if(sellp>costp){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}