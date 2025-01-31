#include <stdio.h>

int main() {
    int size, pos;
    scanf("%d",&size);
    int arr[size],rotarr[size];
    scanf("%d",&pos);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<pos; i++){
        rotarr[i] = arr[size-pos+i];
    }
    for(int i=0; i<size-pos; i++){
        rotarr[pos+i] = arr[i];
    }
    for(int i=0; i<size; i++){
        printf("%d\n",rotarr[i]);
    }
    
    return 0;
}