#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s", &str);
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            continue;
        }
        count++;
    }
    printf("%d",count);
}