#include<stdio.h>
int main(){
    char str[50];
    int count = 0;

    char ch;
    int i = 0;
    while(ch != '\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    count++;
    str[i] = '\0';

    for(int i=count; i>=0; i++){
        printf("%c",str[i]);
    }
}