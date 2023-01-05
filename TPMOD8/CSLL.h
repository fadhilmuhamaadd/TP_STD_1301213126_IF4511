#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define last(L) ((L).last)

struct infotype{
    string Artis;
    string Judul;
    string Genre;
    int playtime;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct listlagu{
    adr first;
};

void create_list_1301213126(listlagu &L);
adr createElement_1301213126(infotype lagubaru);
void insertlast_1301213126(listlagu &L, adr P);
adr deletefirst_1301213126(listlagu &L);
void showSemualagu_1301213126(listlagu L);


#endif // CSLL_H_INCLUDED
