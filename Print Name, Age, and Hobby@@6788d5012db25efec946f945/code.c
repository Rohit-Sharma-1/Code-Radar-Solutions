#include <stdio.h>

int main() {
    char name[30], hobby[30];
    int age;
    scanf("%s %d %s",&name, &age, &hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s\n",name, age, hobby);
    return 0;
}