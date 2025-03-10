#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int nums[n]; // This array will store unique elements
    int isUnique; // Flag to check uniqueness of the current element

    for (int i = 0; i < n; i++) {
        isUnique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == nums[j]) {
                isUnique = 0; // Element is not unique
                break;
            }
        }
        if (isUnique) {
            nums[count] = arr[i]; // Store the unique element
            count++; // Increment the count of unique elements
        }
    }

    printf("Number of distinct elements: %d\n", count);
    return 0;
}
