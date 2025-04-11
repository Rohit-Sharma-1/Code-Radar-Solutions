#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",&str);
    char str2[50];

    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    int j = 0;
    for(int i=count-1; i>=0; i--,j++){
        str2[j] = str[i];
        printf("%s",str2);
    }
    // if(str==str2){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }
    

}