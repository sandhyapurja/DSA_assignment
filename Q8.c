#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp = 0, swaps = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    swaps++;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comp++;
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comp++;
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(&arr[i], &arr[min]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            comp++;
            arr[j + 1] = arr[j];
            swaps++;
            j--;
        }
        if (j >= 0) comp++;
        arr[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
    
    int i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2) {
        comp++;
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
        swaps++;
    }
    
    while (i < n1) { arr[k++] = L[i++]; swaps++; }
    while (j < n2) { arr[k++] = R[j++]; swaps++; }
}

void mergeSortHelper(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSortHelper(arr, l, m);
        mergeSortHelper(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void mergeSort(int arr[], int n) {
    mergeSortHelper(arr, 0, n - 1);
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, choice;
    
    printf("Sorting Algorithms\n\n");
    
    printf("How many numbers? ");
    scanf("%d", &n);
    
    int orig[n], arr[n];
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        orig[i] = (rand() % 1000) + 1;
    
    printf("Random array: ");
    print(orig, n);
    
    while (1) {
        printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        
        if (choice == 5) break;
        if (choice < 1 || choice > 4) continue;
        
        for (int i = 0; i < n; i++) arr[i] = orig[i];
        comp = swaps = 0;
        
        printf("\nBefore: ");
        print(arr, n);
        
        if (choice == 1) bubbleSort(arr, n);
        else if (choice == 2) selectionSort(arr, n);
        else if (choice == 3) insertionSort(arr, n);
        else mergeSort(arr, n);
        
        printf("After:  ");
        print(arr, n);
        printf("\nComparisons: %d\nSwaps: %d\n", comp, swaps);
    }
    
    return 0;
}
