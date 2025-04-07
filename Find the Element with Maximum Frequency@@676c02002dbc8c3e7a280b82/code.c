#include<stdio.h>
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
        if(freq[i]==0){
            continue;
        }
        int count = 1;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[i] = 0;
            }
        }
        freq[i] = count;
    }
    int cand;
    for(int i=1; i<n; i++){
        if(freq[i-1]>freq[i]){
            cand = i;
        }
    }
    printf("%d",arr[cand]);
}