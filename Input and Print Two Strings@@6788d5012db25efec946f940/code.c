#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s",&str1, &str2);
    char str3[100];
    str3 = strcat(str1,str2);
    printf("You entered: %s",str3);
    return 0;
}