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
    int largest = arr[n - 1];
    int secondLargest = -1;
    
    // Iterate from the second to last element to find the second largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            secondLargest = arr[i];
            break;
        }
    }
    if (secondLargest == -1) {
        printf("-1");
    } else {
        printf("%d", secondLargest);
    }
}