#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("Digit");
    }else if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z')){
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