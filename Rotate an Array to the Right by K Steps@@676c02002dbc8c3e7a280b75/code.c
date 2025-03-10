#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[k];
    for(int i=n; i<n-k; i--){
        temp[i] = arr[i];
    }
    for(int i=n; i<n-k; i--){
        printf("%d",temp[i]);
    }
}