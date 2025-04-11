#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    scanf("%s",&str);
    char str[50];
    str = tolower(str1);
    
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }

    printf("%d",count);
}