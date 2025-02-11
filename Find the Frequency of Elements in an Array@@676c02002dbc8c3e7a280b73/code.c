// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n], count[n];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(!(arr[i]==arr2[j])){
                arr2[j]=arr[i];
            }else{
                count[j]+=1;
            }
        }
    }
    for(int i=1; i<=n; i++){
        printf("%d %d\n",arr2[i],count[i]);
    }
}