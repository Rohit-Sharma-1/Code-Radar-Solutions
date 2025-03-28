#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxdiff=INT_MAX;
    for(int i=0;i<n;i++){
        int diff;
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j]<maxdiff){
                diff=arr[i]-arr[j];
                printf("%d %d",arr[i],arr[j]);
            }
        }

    }

}