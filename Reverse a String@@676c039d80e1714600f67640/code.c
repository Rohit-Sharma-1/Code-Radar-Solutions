#include<stdio.h>
int main(){
    char str[50];
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        scanf("%c",&str[i]);
        count++;
    }
    for(int i=count-1; i>=0; i++){
        printf("%c",str[i]);
    }
}