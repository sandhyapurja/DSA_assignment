# DSA Assignment 2 – Question 8
## Sorting Algorithms Comparison

A C program that generates random integers and allows users to sort them using different algorithms while displaying performance statistics.

## 📌 About the Program

This program generates N random integers in the range [1, 1000] and lets users choose from four popular sorting algorithms. After sorting, it displays the number of comparisons and swaps performed, allowing comparison of algorithm efficiency

## Sorting Algorithms

### 1. Bubble Sort
Repeatedly compares adjacent elements and swaps them if they're in wrong order.

### How it works:
Compare each pair of adjacent items

Swap if they're in wrong order

Repeat until no swaps needed

### Characteristics:

Simple but inefficient
Stable sort
Many swaps

### 2. Selection Sort
Finds the minimum element and places it at the beginning.

### How it works:
Find minimum element in unsorted portion

Swap with first unsorted element

Move boundary of sorted portion

### Characteristics:

Fewer swaps than bubble sort
Not stable
Always O(n²) comparisons

### 3. Insertion Sort
Builds sorted array one element at a time.

### How it works:
Take one element from unsorted portion

Insert it into correct position in sorted portion

Shift elements as needed

### Characteristics:

Efficient for small datasets
Stable sort
Adaptive (fast on nearly sorted data)

### 4. Merge Sort
Divide and conquer algorithm that splits array and merges sorted halves.

### How it works:
Divide array into two halves

Recursively sort each half

Merge the sorted halves

### Characteristics:
Consistently fast
Stable sort
Requires extra space
