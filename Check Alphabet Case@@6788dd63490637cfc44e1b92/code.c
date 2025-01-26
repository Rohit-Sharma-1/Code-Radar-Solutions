#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(((int)ch>65)&&((int)ch<103)){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}