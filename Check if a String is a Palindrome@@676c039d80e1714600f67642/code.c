#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",&str1);
    char str2[50];

    count = 0;

    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    for(int i=count-1; i>=0; i++){
        str2 = str[i];
    }
    if(str==str2){
        printf("Yes");
    }else{
        printf("No");
    }
    

}