#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    for(int i=0; i<n; i++){
        if(n==1){
            printf("%d ",arr[i]);
        }
        if(i==0 || i==(n-1)){
            printf("%d ",arr[i]);
        }


    }
    return 0;
}