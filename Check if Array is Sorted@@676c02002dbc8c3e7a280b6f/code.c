#include <stdio.h>
int sort(int arr[],int size){
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            return 0;
            }
        }else{
            return 1;
        }
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    if(sort(arr,size)){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\n");
    }
    return 0;
}