#include<stdio.h>
int main(){
    char str;
    scanf("%s",&str);

    for(int i=0; i<'\0'; i++){
        printf("%c",str[i]);
    }
}