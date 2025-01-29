#include <stdio.h>

int main() {
    int size, arr[size], pos;
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);
    for(int i=0; i<pos; i++){
        int swap1 = arr[i];
        int swap2 = arr[size-i-1];
        arr[i] = swap2;
        arr[size-i-1] = swap1;
    }
    for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}