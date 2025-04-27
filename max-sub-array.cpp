#include <iostream>

// Function to find the maximum subarray sum
int maxsubarray(int arr[], int n) {
    int maxsum = 0; // To store the maximum sum
    for (int i = 0; i < n; i++) {
        int currentsum = 0; // Initialize the current sum for each starting index
        for (int j = i; j < n; j++) {
            currentsum += arr[j];
            if (currentsum > maxsum) {
                maxsum = currentsum;
            }
        }
    }
    return maxsum; // Return the maximum sum after all iterations
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Correctly determine the size of the array
    std::cout << "Maximum Subarray Sum: " << maxsubarray(arr, n) << std::endl;
    return 0;
}


