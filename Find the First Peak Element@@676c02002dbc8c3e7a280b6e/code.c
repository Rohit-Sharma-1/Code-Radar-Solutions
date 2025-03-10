#include <stdio.h>

int main() {
    int n, arr[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int res;
    for(int i=1; i<=n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            res = arr[i];
            printf("%d",res);
            break;
        }
    }
    return 0;
}