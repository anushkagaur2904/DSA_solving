//Recursive bubble sort
/*
void bubble_sort(int arr[], int n) {
    // Base Case: if the size is 1, it's already sorted
    if (n == 1) return;

    int didSwap = 0; // Flag to check if any swap occurred in this pass

    // One pass: push the largest element to the end
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            // Swap arr[j] and arr[j + 1]
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1; // Mark that we did a swap
        }
    }

    // If no swap happened, array is already sorted
    if (didSwap == 0) return;

    // Recurse for the remaining unsorted portion
    bubble_sort(arr, n - 1);
}
Time Complexity: O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.

Space Complexity: O(N) auxiliary stack space.
*/