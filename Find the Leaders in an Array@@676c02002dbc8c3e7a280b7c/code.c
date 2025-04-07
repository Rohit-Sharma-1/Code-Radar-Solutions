#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int carr[n];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                carr[i] += arr[i];
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d",carr[i]);
    }
    printf("%d",arr[n-1]);
}