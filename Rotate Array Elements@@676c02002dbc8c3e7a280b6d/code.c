#include <stdio.h>

int main() {
    int size, arr[size], pos;
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",pos);
    int rotarr[size];
    for(int i=0; i<pos; i++){
        rotarr[i] = arr[size-pos+i];
    }
    for(int i=0; i<size-pos; i++){
        temp[pos+i] = rotarr[i];
    }
    for(int i=0; i<size; i++){
        printf("%d\n",rotarr[i]);
    }
    
    return 0;
}