#include<stdio.h>
int sum(int n){
    int sumy;
    sumy = n%10 + n/10;
    return sumy;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d",sum(arr[i]));
    }
}