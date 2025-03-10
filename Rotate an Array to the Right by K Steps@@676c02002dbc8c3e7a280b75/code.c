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
    if(k>n){
        for(int i=0; i<k-n; i++){
        temp[i] = arr[n-(k-n)+i];
        }
        for(int i=0; i<n-(k-n); i++){
            temp[(k-n)+i] = arr[i];
        }
    }else{
        for(int i=0; i<k; i++){
        temp[i] = arr[n-k+i];
        }
        for(int i=0; i<n-k; i++){
            temp[k+i] = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",temp[i]);
    }
}