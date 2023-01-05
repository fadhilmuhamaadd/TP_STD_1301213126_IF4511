#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

typedef char infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode child;
    adrNode next;
};

struct Graph{
    adrNode first;
};

void createlist_1301213126(Graph &G);
adrNode newNode_1301213126(char x);
void addNode_1301213126(Graph &G, adrNode p);
adrNode findNode_1301213126(Graph G,char x);
void addedge_1301213126(Graph &G,char x, char y);
bool isConnected_1301213126(Graph G,char x, char y);
void printGraph_1301213126(Graph G);

#endif // GRAPH_H_INCLUDED
