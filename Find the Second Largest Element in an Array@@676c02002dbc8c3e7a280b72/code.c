#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n<=1){
        printf("%d",-1);
    }
    else{
        
        int res;
        for(int i=0;i<n-2; i++){
            if(arr[i]==arr[i+1]){
                res = -1;
            }
            else{
                res = arr[n-2];
            }
        }
        printf("%d",res);
        
    }
}