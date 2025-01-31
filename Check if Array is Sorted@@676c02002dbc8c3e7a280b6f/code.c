#include <stdio.h>
int sort( int arr[],int size){
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            return 1;
    }
    return 0;
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    if(sort(arr, size)){
        printf(" Not Sorted");
    }else{
        printf("Sorted");
    }
    return 0;
}