int findUnsortedSubarrayLength(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first out-of-order index from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    if (start == -1) return 0; // Already sorted

    // Find the first out-of-order index from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find min and max in the unsorted subarray
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand the window to include elements out of place
    while (start > 0 && arr[start - 1] > min) start--;
    while (end < n - 1 && arr[end + 1] < max) end++;

    return end - start + 1;
}
