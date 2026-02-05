# DSA Assignment 2 – Question 5
# Graph Traversal - BFS & DFS
A C program that implements an undirected graph using an adjacency matrix and performs Breadth-First Search (BFS) and Depth-First Search (DFS) traversals.

## 📌 About the Program

This program allows users to create a graph using an adjacency matrix representation and traverse it using two fundamental graph traversal algorithms: BFS and DFS.

## Features

Adjacency Matrix representation of graphs
BFS (Breadth-First Search) - Level-order traversal
DFS (Depth-First Search) - Depth-order traversal
Display adjacency matrix
Choose starting vertex for traversal

## Graph Representation
The program uses an adjacency matrix where:

**graph[i][j] = 1** means there's an edge between vertex i and j
**graph[i][j] = 0** means no edge exists
For undirected graphs: **graph[i][j] = graph[j][i]**

## Algorithms
### BFS (Breadth-First Search)

Uses a queue data structure
Visits all neighbors at the current level before moving deeper
Explores the graph level by level
Use cases: Shortest path, level-order traversal

### Steps:

Mark starting vertex as visited and enqueue it
Dequeue a vertex and print it
Enqueue all unvisited neighbors
Repeat until queue is empty

### DFS (Depth-First Search)

Uses recursion (implicit stack)
Goes as deep as possible before backtracking
Explores one branch completely before moving to next
Use cases: Cycle detection, pathfinding, topological sorting

### Steps:

Mark current vertex as visited and print it
Recursively visit all unvisited neighbors
Backtrack when no unvisited neighbors exist

## Applications
### BFS Applications:

Finding shortest path in unweighted graphs
Web crawlers
Social networking (finding friends within distance)
GPS navigation systems
Broadcasting in networks

### DFS Applications:

Detecting cycles in graphs
Topological sorting
Solving mazes
Finding connected components
Pathfinding in games




