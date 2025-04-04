#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int freq[n];
    for(int i=0; i<n; i++){
        freq[i] = -1;
    }
    for(int i=0; i<n; i++){
        int count = 1;
        if(freq[i]==0){
            continue;
        }
        for(int j=i+1; j<n; j++){
             if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
             }
        }
        freq[i] = count;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(freq[j]<freq[j+1]){
                int temp;
                temp = freq[j];
                freq[j] = freq[j+1];
                freq[j+1] = temp;
            }
        }
    }
    printf("%d",freq[0]);
}