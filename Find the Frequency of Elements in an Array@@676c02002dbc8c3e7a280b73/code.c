// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n], count=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[i]==arr2[j]){
                count+=1;
            }else{
                arr2[j]=arr1[i];
            }
        }
    }
    for(int i=1; i<=n; i++){
        printf("%d %d",arr[2],count);
    }
}