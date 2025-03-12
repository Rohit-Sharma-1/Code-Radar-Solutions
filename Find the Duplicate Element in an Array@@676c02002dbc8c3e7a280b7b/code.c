#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0; i<n; i++){
        if(arr[i]==temp[i]){
            printf("%d",arr[i]);
            break;
        }else{
            temp[i] = arr[i];
        }
    }
    return 0;
}