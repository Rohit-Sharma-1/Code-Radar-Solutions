#include <stdio.h>

int main() {
    int n, arr[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int res = -1;
    for(int i=1; i<=n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            res = arr[i];
            break;
        }else{
            res = arr[n-1];
        }
    }
    printf("%d",res);
    return 0;
}