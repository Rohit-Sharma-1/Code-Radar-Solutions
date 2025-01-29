#include <stdio.h>

int main() {
    int size, arr[size], pos;
    scanf("%d %d %d",&size, &arr, &pos);
    for(int i=0; i<=pos; i++){
        int swap1 = arr[i];
        int swap2 = arr[size-i];
        swap1 = arr[size-i];
        swap2 = arr[i];
    }
    printf("%d",arr);
    return 0;
}