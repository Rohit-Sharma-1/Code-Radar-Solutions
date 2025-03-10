#include <stdio.h>

int main() {
    int n, arr[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=1; i<=n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            return 0;
        }
    }

    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
    } else if (arr[n-1] > arr[n-2]) {
        printf("%d\n", arr[n-1]);
    } else {
        printf("-1");
    }
    return 0;
}