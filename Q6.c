#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(int arr[], int n, int i) {
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] < arr[small])
        small = left;
    if (right < n && arr[right] < arr[small])
        small = right;
    
    if (small != i) {
        swap(&arr[i], &arr[small]);
        minHeapify(arr, n, small);
    }
}

void maxHeapify(int arr[], int n, int i) {
    int large = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] > arr[large])
        large = left;
    if (right < n && arr[right] > arr[large])
        large = right;
    
    if (large != i) {
        swap(&arr[i], &arr[large]);
        maxHeapify(arr, n, large);
    }
}

void buildMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, choice;
    
    printf("Min and Max Heap\n\n");
    
    printf("Number of elements: ");
    scanf("%d", &n);
    
    int original[n], arr[n];
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }
    
    printf("\nOriginal: ");
    printArray(original, n);
    
    while (1) {
        printf("\n1. Min Heap\n2. Max Heap\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        
        for (int i = 0; i < n; i++)
            arr[i] = original[i];
        
        if (choice == 1) {
            buildMinHeap(arr, n);
            printf("Min Heap: ");
            printArray(arr, n);
        }
        else if (choice == 2) {
            buildMaxHeap(arr, n);
            printf("Max Heap: ");
            printArray(arr, n);
        }
        else if (choice == 3) {
            break;
        }
    }
    
    return 0;
}
