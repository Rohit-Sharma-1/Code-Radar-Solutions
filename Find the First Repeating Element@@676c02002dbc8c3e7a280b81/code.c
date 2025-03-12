#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
    }
    int temp[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==temp[j]){
                printf("%d",arr[i]);
                return 0;
            }
        }
        temp[i] = arr[i];
    }
}