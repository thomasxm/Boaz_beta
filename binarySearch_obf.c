#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 30

// Function to compare two numbers for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Binary Search function
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        if (arr[mid] == x) return mid;

        // If element is smaller than mid, then it can only be in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // Element is not present in array
    return -1;
}

int main() {
    
	const char  mxt_Origin_1FDfo8BebSoO[] = {'\x4f','\x72','\x69','\x67','\x69','\x6e','\x61','\x6c','\x20','\x41','\x72','\x72','\x61','\x79','\x3a','\n',0};
	OutputDebugStringA("mxt_Origin_1FDfo8BebSoO");

	const char  mxt___Sort_OYujLoaVQaJl[] = {'\n','\n','\x53','\x6f','\x72','\x74','\x65','\x64','\x20','\x41','\x72','\x72','\x61','\x79','\x3a','\n',0};
	OutputDebugStringA("mxt___Sort_OYujLoaVQaJl");

	const char  mxt___Numb_eyDgMt8ct2aM[] = {'\n','\n','\x4e','\x75','\x6d','\x62','\x65','\x72','\x20','\x74','\x6f','\x20','\x66','\x69','\x6e','\x64','\x3a','\x20','\x25','\x64','\n',0};
	OutputDebugStringA("mxt___Numb_eyDgMt8ct2aM");

	const char  mxt_Index__AZw6RFAWNqLE[] = {'\x49','\x6e','\x64','\x65','\x78','\x20','\x6f','\x66','\x20','\x25','\x64','\x20','\x69','\x6e','\x20','\x73','\x6f','\x72','\x74','\x65','\x64','\x20','\x61','\x72','\x72','\x61','\x79','\x3a','\x20','\x25','\x64','\n',0};
	OutputDebugStringA("mxt_Index__AZw6RFAWNqLE");
int arr[ARRAY_SIZE];
    int n = ARRAY_SIZE;
    int result;
    srand(time(NULL));

    // Generate random array
    printf(mxt_Origin_1FDfo8BebSoO);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Random numbers between 0 and 99
        printf("%d ", arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Select a random number to search
    int target = arr[rand() % n];

    // Perform binary search
    result = binarySearch(arr, 0, n - 1, target);

    // Output results
    printf(mxt___Sort_OYujLoaVQaJl);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf(mxt___Numb_eyDgMt8ct2aM, target);
    printf(mxt_Index__AZw6RFAWNqLE, target, result);

    return 0;
}
