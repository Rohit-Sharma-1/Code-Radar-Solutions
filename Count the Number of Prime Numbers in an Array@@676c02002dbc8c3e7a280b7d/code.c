#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int isPrime = 0;
    for(int i=2; i<n; i++){
        if(arr[i]%i!=0){
            isPrime = 1;
            count++;
        }
    }
    printf("%d",count);
}