#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, arr[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int arr2 = qsort(arr);
    for(int i=0; i<n; i++){
        if(i==0 || i==(n-1)){
            printf("%d",arr2[i]);
        }

    }
    return 0;
}