#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char str2[100];
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
}