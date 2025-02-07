#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d ",&arr[i]);
    }
    int ceven=0, codd=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            ceven+=1;
        }else{
            codd+=1;
        }
    }
    print("%d %d",ceven, codd);
    return 0;
}