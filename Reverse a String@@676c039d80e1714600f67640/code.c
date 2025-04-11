#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);

    for(int i=0; i<'\0'; i++){
        printf("%c",str[i]);
    }
}