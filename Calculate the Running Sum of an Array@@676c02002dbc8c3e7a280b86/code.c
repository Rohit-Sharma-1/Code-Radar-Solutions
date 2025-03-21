#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // printf("%d",arr[0]);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += i;
        printf("%d",sum);
    }
}