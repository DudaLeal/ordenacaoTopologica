#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura do nó da lista encadeada
typedef struct node {
    int vertex;
    struct node* next;
} Node;

// Criando um novo nó
Node* newNode(int vertex) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->vertex = vertex;
    node->next = NULL;
    return node;
}

// Adicionando uma aresta na lista de adjacência
void addEdge(Node** adjList, int src, int dest) {
    Node* new_node = newNode(dest);
    new_node->next = adjList[src];
    adjList[src] = new_node;
}

// Imprimindo a ordenação topológica do grafo
void printTopologicalOrder(int* visited, Node** adjList, int vertex, int* stack, int* stackTop) {
    visited[vertex] = 1;
    Node* node = adjList[vertex];
    while (node != NULL) {
        if (!visited[node->vertex]) {
            printTopologicalOrder(visited, adjList, node->vertex, stack, stackTop);
        }
        node = node->next;
    }
    stack[(*stackTop)++] = vertex;
}

int main() {
    int vertices, edges, i, src, stackTop = 0;
    //printf("Digite o numero de vertices e arestas: ");
    scanf("%d %d", &vertices, &edges);

    // Criando a lista de adjacência
    Node** adjList = (Node**) malloc(sizeof(Node*) * (vertices + 1));
    for (i = 1; i <= vertices; i++) {
        adjList[i] = NULL;
    }

    // Lendo as arestas
    for (i = 0; i < vertices; i++) {
        //printf("Digite os vertices que apontam para o vertice %d (separados por espaços): ", i + 1);
        char input[100];
        scanf(" %[^\n]", input);

        src = i + 1;
        char* token = strtok(input, " ");
        while (token != NULL) {
            int dest = atoi(token);
            addEdge(adjList, src, dest);
            token = strtok(NULL, " ");
        }
    }

    // Ordenação topológica
    int* visited = (int*) malloc(sizeof(int) * (vertices + 1));
    for (i = 1; i <= vertices; i++) {
        visited[i] = 0;
    }
    int* stack = (int*) malloc(sizeof(int) * (vertices + 1));
    for (i = 1; i <= vertices; i++) {
        if (!visited[i]) {
            printTopologicalOrder(visited, adjList, i, stack, &stackTop);
        }
    }
    //printf("Ordenacao topologica: ");
    for (i = stackTop - 1; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
