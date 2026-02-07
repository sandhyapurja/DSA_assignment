#include <stdio.h>
#include <limits.h>

#define INF INT_MAX

int graph[20][20], n;

int minDist(int dist[], int visited[]) {
    int min = INF, idx = -1;
    
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            idx = i;
        }
    }
    return idx;
}

void dijkstra(int src) {
    int dist[20], visited[20];
    
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    
    dist[src] = 0;
    
    for (int c = 0; c < n - 1; c++) {
        int u = minDist(dist, visited);
        if (u == -1) break;
        
        visited[u] = 1;
        
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF) {
                int newDist = dist[u] + graph[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                }
            }
        }
    }
    
    printf("\nShortest paths from %d:\n", src);
    for (int i = 0; i < n; i++) {
        printf("%d -> %d: ", src, i);
        if (dist[i] == INF)
            printf("No path\n");
        else
            printf("%d\n", dist[i]);
    }
}

int main() {
    int src;
    
    printf("Dijkstra's Shortest Path\n\n");
    
    printf("How many vertices? ");
    scanf("%d", &n);
    
    printf("Enter adjacency matrix (0 = no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    
    printf("\nStart from vertex: ");
    scanf("%d", &src);
    
    dijkstra(src);
    
    return 0;
}
