#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(((int)ch>97)&&((int)ch<122)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}