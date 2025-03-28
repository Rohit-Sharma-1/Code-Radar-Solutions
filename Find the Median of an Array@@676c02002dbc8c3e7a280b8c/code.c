#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
        return 0;
    }
    if(n%2!=0){
        printf("%d",(n+1)/2);
    }else{
        printf("%d",(arr[(n/2)-1] + arr[(n/2)])/2);
    }
    return 0;
}