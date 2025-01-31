#include <stdio.h>
int sort( int arr[],int size){
    for(int i=1; i<size; i++){
        if(arr[i-1]<arr[i]){
            return 1;
        }else if(arr[i-1]>arr[i]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, size);
    if(sort){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}