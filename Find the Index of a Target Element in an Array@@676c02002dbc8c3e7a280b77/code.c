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
    int res = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            res = i;
            break;
        }
    }
    printf("%d",res);
}