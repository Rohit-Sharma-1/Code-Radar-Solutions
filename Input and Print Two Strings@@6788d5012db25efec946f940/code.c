#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s",&str1, &str2);
    *str2[0]=" a";
    *str2[1]="n";
    *str3[2]="d ";
    strcat(str1,str2);
    printf("You entered: %s",str1);
    return 0;
}