#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(FA) (((FA)).first)

typedef char infotype;

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void Create_list_1301213126(List &FA);
adr newElement_1301213126(infotype x);
void insert_first_1301213126(List &FA, adr p);
void Show_1301213126(List FA);
adr DeleteLast_1301213126(List &FA);
adr DeleteFirst_1301213126(List &FA);
#endif // SLL_H_INCLUDED
