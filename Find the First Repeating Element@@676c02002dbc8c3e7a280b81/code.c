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
            if(arr[j]==temp[i]){
                printf("%d",arr[j]);
                return 0;
            }else{
                temp[i] = arr[j];
            }
        }
    }
}