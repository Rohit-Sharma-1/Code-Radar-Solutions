#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if((ch="a")||(ch=="b")){
        printf("Vowel");
    }
    return 0;
}