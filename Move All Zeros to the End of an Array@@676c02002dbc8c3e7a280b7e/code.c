#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            int temp;
            temp == arr[i];
            count++;
        }
    }
    for(int i=0; i<count; i++){
        arr[n-count] = 0;
    }
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}