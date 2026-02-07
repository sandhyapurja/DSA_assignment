# DSA Assignment 2 – Question 4

# Min and Max Heap Builder
A C program that builds min heap and max heap from an unsorted array of data.

## 📌 About the Program
This program takes an array of unsorted integers and builds either a min heap or max heap using the heapify algorithm. A heap is a complete binary tree represented as an array where parent-child relationships follow specific rules.

## Heap Properties
### Min Heap

Property: Parent ≤ Children
Root contains the minimum element
Used in: Priority queues, Dijkstra's algorithm, heap sort

### Max Heap

Property: Parent ≥ Children
Root contains the maximum element
Used in: Heap sort, priority scheduling, job scheduling

## Array Representation
For a node at index i:

Left child: 2*i + 1
Right child: 2*i + 2
Parent: (i-1) / 2

## Applications
### Min Heap:

Priority Queue - Process tasks with minimum priority first
Dijkstra's Algorithm - Finding shortest paths
Huffman Coding - Data compression
Median Maintenance - Finding running median
Event-driven Simulation - Next event scheduling

### Max Heap:

Heap Sort - Sorting in ascending order
Priority Scheduling - OS task scheduling
Finding K largest elements - Top K problems
Job Scheduling - Maximum profit jobs
Load Balancing - Assign tasks to least loaded server




