#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    Graph G;
    createlist_1301213126(G);
    addNode_1301213126(G, newNode_1301213126('A'));
    addNode_1301213126(G, newNode_1301213126('B'));
    addNode_1301213126(G, newNode_1301213126('C'));
    addNode_1301213126(G, newNode_1301213126('D'));
    addedge_1301213126(G, 'A', 'C');
    addedge_1301213126(G, 'A', 'D');
    addedge_1301213126(G, 'A', 'B');
    addedge_1301213126(G, 'B', 'A');
    addedge_1301213126(G, 'B', 'D');
    addedge_1301213126(G, 'C', 'A');
    addedge_1301213126(G, 'D', 'B');
    addedge_1301213126(G, 'D', 'A');
    printGraph_1301213126(G);
    return 0;

}
