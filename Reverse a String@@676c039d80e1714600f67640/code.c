#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);

    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    for(int i=count; i>=0; i--){
        printf("%c",str[i]);
    }
}