# DSA Assignment 2 – Question 7

## Dijkstra's Shortest Path Algorithm

A C program that implements Dijkstra's algorithm to find the shortest path from a source node to all other nodes in a weighted graph.

## 📌 About the Program

Dijkstra's algorithm is a greedy algorithm used to find the shortest path between nodes in a weighted graph. This implementation uses an adjacency matrix to represent the graph and finds the minimum distance from a source vertex to all other vertices.

## Features

Weighted graph representation using adjacency matrix

Finds shortest distance from source to all vertices

Handles disconnected graphs (shows "No path")

Works for both directed and undirected graphs

Simple and efficient implementation

## Algorithm Overview
### How It Works:

Initialize: Set distance to source as 0, all others as infinity

Select: Pick unvisited vertex with minimum distance

Update: For each neighbor, calculate new distance via current vertex

Compare: If new distance is shorter, update it

Mark: Mark current vertex as visited

Repeat: Continue until all vertices are processed

## Applications
### Real-World Uses:

GPS Navigation - Finding shortest routes

Network Routing - Internet packet routing (OSPF protocol)

Flight Planning - Cheapest flight paths

Maps - Google Maps, road networks

Robotics - Path planning for robots

Game Development - AI pathfinding

Telecommunication - Optimal cable laying
