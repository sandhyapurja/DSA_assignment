#include <stdio.h>

int graph[20][20], visited[20], n;

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;
    
    for (int i = 0; i < n; i++) {
        if (graph[v][i] && !visited[i]) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    int queue[20], front = 0, rear = 0;
    
    visited[start] = 1;
    queue[rear++] = start;
    
    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);
        
        for (int i = 0; i < n; i++) {
            if (graph[v][i] && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    int choice, start;
    
    printf("Graph Traversal (BFS & DFS)\n\n");
    
    printf("Number of vertices: ");
    scanf("%d", &n);
    
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }
    
    while (1) {
        printf("\n1. BFS\n2. DFS\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        
        if (choice == 3) break;
        
        if (choice == 1 || choice == 2) {
            printf("Start vertex: ");
            scanf("%d", &start);
            
            for (int i = 0; i < n; i++) visited[i] = 0;
            
            printf("%s: ", choice == 1 ? "BFS" : "DFS");
            
            if (choice == 1) BFS(start);
            else DFS(start);
            
            printf("\n");
        }
    }
    
    return 0;
}
