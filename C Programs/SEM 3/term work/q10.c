//Q10 Write a C program to implement DFS and BFS.

#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum number of vertices in the graph

void addEdge(int graph[MAX][MAX], int u, int v);    // Function to add an edge between two vertices
void resetVisited(int visited[MAX], int vertices);  // Function to reset the visited array
void displayGraph(int graph[MAX][MAX], int vertices); // Function to display the adjacency matrix
void dfs(int graph[MAX][MAX], int visited[MAX], int start, int vertices); // Depth First Search (DFS)
void bfs(int graph[MAX][MAX], int visited[MAX], int start, int vertices); // Breadth First Search (BFS)

int main() {
    int graph[MAX][MAX] = {0};  // Initialize the graph as an adjacency matrix
    int visited[MAX] = {0};      // Array to track visited nodes
    int vertices, choice, u, v, start;

    // User input for the number of vertices with validation
    printf("Enter the number of vertices (max %d): ", MAX);
    scanf("%d", &vertices);
    if (vertices <= 0 || vertices > MAX) {
        printf("Invalid number of vertices.\n");
        return 1; // Exit if invalid number of vertices
    }

    // Main menu-driven loop
    while (1) {
        printf("\nMenu: 1. Add Edge\n2. Display Graph\n3. DFS Traversal\n4. BFS Traversal\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            // Input for adding an edge
            printf("Enter the edge (u v): ");
            scanf("%d %d", &u, &v);
            if (u >= vertices || v >= vertices || u < 0 || v < 0) {
                printf("Invalid vertex number. Please enter valid vertices within range (0 to %d).\n", vertices - 1);
            } else {
                addEdge(graph, u, v);
            }
            break;

        case 2:
            // Display the adjacency matrix
            displayGraph(graph, vertices);
            break;

        case 3:
            // DFS Traversal
            resetVisited(visited, vertices);  // Reset visited array before DFS
            printf("Enter the starting vertex for DFS: ");
            scanf("%d", &start);
            if (start >= vertices || start < 0) {
                printf("Invalid starting vertex.\n");
            } else {
                printf("DFS Traversal: ");
                dfs(graph, visited, start, vertices);
                printf("\n");
            }
            break;

        case 4:
            // BFS Traversal
            resetVisited(visited, vertices);  // Reset visited array before BFS
            printf("Enter the starting vertex for BFS: ");
            scanf("%d", &start);
            if (start >= vertices || start < 0) {
                printf("Invalid starting vertex.\n");
            } else {
                printf("BFS Traversal: ");
                bfs(graph, visited, start, vertices);
                printf("\n");
            }
            break;

        case 5:
            // Exit the program
            printf("Exiting...\n");
            exit(0);

        default:
            // Invalid choice
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

// Function to add an edge between two vertices
void addEdge(int graph[MAX][MAX], int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;  // For undirected graph, we add the edge in both directions
}

// Function to reset the visited array
void resetVisited(int visited[MAX], int vertices) {
    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }
}

// Function to display the graph (Adjacency matrix)
void displayGraph(int graph[MAX][MAX], int vertices) {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

// Depth First Search (DFS) algorithm using recursion
void dfs(int graph[MAX][MAX], int visited[MAX], int start, int vertices) {
    printf("%d ", start);
    visited[start] = 1;

    // Recursively visit all unvisited adjacent vertices
    for (int i = 0; i < vertices; i++) {
        if (graph[start][i] == 1 && !visited[i]) {
            dfs(graph, visited, i, vertices);
        }
    }
}

// Breadth First Search (BFS) algorithm using queue
void bfs(int graph[MAX][MAX], int visited[MAX], int start, int vertices) {
    int queue[MAX];
    int front = -1, rear = -1;

    rear = front = 0;
    queue[rear] = start;  // Start from the given vertex
    visited[start] = 1;

    while (front <= rear) {
        int current = queue[front++];  // Dequeue the front element
        printf("%d ", current);

        // Visit all unvisited adjacent vertices
        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                queue[++rear] = i;  // Enqueue the unvisited vertex
                visited[i] = 1;
            }
        }
    }
}
