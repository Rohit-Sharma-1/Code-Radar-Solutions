#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int isPrime = 1;
    for(int i=2; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]%j==0){
            isPrime = 0;
            count++;
        }
        }
    }
    printf("%d",count);
}