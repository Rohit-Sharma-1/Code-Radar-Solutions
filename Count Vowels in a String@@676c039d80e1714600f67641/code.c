#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%s",&str);
    
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        char ch;
        ch = tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }

    printf("%d",count);
}