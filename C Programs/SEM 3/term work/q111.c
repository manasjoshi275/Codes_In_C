#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct Edge {
    int u, v, weight;
    struct Edge *next;
} Edge;

void initUnionFind(int [],int);
int find(int[],int);
void unionSet(int[],int,int);
void addEdge(Edge**,int,int,int);
void displayEdges(Edge*);
void kruskal(int,Edge*);


int main() {
    Edge *edges = NULL;
    int vertices, choice, u, v, weight;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    if (vertices <= 0 || vertices > MAX) {
        printf("Invalid number of vertices.\n");
        return 1;
    }
    while (1) {
        printf("\nMenu:\n1. Add Edge\n2. Display Edges\n3. Kruskal's Algorithm\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter edge (u v weight): ");
                scanf("%d %d %d", &u, &v, &weight);
                if (u < vertices && v < vertices && u >= 0 && v >= 0) addEdge(&edges, u, v, weight);
                else printf("Invalid edge.\n");
                break;
            case 2:
                displayEdges(edges);
                break;
            case 3:
                kruskal(vertices, edges);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

void initUnionFind(int parent[], int vertices) {
    for (int i = 0; i < vertices; i++) parent[i] = i;
}

int find(int parent[], int i) {
    if (i != parent[i]) parent[i] = find(parent, parent[i]);
    return parent[i];
}

void unionSet(int parent[], int u, int v) {
    int rootU = find(parent, u);
    int rootV = find(parent, v);
    if (rootU != rootV) parent[rootU] = rootV;
}

void addEdge(Edge **head, int u, int v, int weight) {
    Edge *newEdge = (Edge *)malloc(sizeof(Edge));
    newEdge->u = u;
    newEdge->v = v;
    newEdge->weight = weight;
    newEdge->next = NULL;

    if (*head == NULL) *head = newEdge;
    else {
        Edge *temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newEdge;
    }
}

void displayEdges(Edge *head) {
    printf("\nEdges in the graph:\n");
    while (head) {
        printf("%d -- %d (Weight: %d)\n", head->u, head->v, head->weight);
        head = head->next;
    }
}

void kruskal(int vertices, Edge *head) {
    int parent[MAX], mstWeight = 0, mstEdges = 0;
    initUnionFind(parent, vertices);

    printf("\nEdges in the MST:\n");
    while (head && mstEdges < vertices - 1) {
        if (find(parent, head->u) != find(parent, head->v)) {
            printf("%d -- %d (Weight: %d)\n", head->u, head->v, head->weight);
            mstWeight += head->weight;
            mstEdges++;
            unionSet(parent, head->u, head->v);
        }
        head = head->next;
    }
    printf("\nTotal weight of MST: %d\n", mstWeight);
}

