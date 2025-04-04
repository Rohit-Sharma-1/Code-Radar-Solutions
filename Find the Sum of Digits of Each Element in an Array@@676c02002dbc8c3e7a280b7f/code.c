#include<stdio.h>
int main(int n){
    int sum;
    sum = n%10 + n/10;
    return sum;
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