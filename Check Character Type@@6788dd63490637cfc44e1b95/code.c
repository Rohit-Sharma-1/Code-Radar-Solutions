#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Dgit");
    }else if(isalpha(ch)){
        char lower_ch = tolower(ch);
        if(lower_ch=='a'||lower_ch=='e'||lower_ch=='i'||lower_ch=='o'||lower_ch=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        } 
    }else{
        printf("special Character");
    }
    return 0;
}