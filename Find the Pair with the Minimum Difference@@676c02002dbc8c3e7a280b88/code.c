#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]<diff){
            printf("%d %d",arr[i],arr[i+1]);
            return 0;
        }

    }


   
}