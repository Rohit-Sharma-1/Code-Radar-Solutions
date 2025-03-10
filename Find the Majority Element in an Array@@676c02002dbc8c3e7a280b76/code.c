#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input elements of the array
    }

    int candidate = -1, count = 0;

    // Phase 1: Find the candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i]; // Set the new candidate
        }
        if (arr[i] == candidate) {
            count++; // Increment the count if the element matches the candidate
        } else {
            count--; // Decrement the count if the element doesn't match
        }
    }

    // Phase 2: Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++; // Count occurrences of the candidate
        }
    }

    if (count > n / 2) {
        printf(" %d\n", candidate); // Print the majority element
    } else {
        printf("-1\n"); // If no majority element exists
    }

    return 0;
}
