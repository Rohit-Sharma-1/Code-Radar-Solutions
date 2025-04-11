#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,50,stdin);
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){

        count++;
    }
    printf("%d",count);
}