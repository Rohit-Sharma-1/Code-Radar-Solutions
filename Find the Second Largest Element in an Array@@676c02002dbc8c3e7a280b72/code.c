#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("-1");
        return 0;
    }
    int Sl = -1;
        for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] != arr[0]){
            Sl = arr[i];
            break;
        }
    }
    printf("%d",Sl);
    
}