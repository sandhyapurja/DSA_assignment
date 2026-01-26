# DSA Assignment 2 – Question 3
# Reverse Linked List
## 📌 About the Program
A C program that implements the reverse traversal algorithm for a singly linked list.This program creates a linked list from user input and reverses it using an iterative approach with three pointers. The reversal is done in-place without using extra space.

## Features

Create a singly linked list
Insert elements at the end
Reverse the entire list
Display the list before and after reversal
Memory management with proper cleanup

## Algorithm
The reversal uses three pointers:

**prev** - points to the previous node (initially NULL)

**current** - points to the current node being processed

**next** - temporarily stores the next node

## Functions

**createNode()** - Creates a new node with given data
**insertAtEnd()** - Inserts a node at the end of the list
**reverseList()** - Reverses the linked list
**printList()** - Displays the linked list
**freeList()** - Frees all allocated memory

## Example
Linked List Reversal
====================

How many elements? 5
Enter 5 elements: 1 2 3 4 5

Original List: 1 -> 2 -> 3 -> 4 -> 5
Reversed List: 5 -> 4 -> 3 -> 2 -> 1

