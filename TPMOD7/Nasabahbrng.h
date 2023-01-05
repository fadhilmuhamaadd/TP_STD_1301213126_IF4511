#ifndef NASABAHBRNG_H_INCLUDED
#define NASABAHBRNG_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

typedef struct DataNasabah infotype;
typedef struct element *adr;

struct DataNasabah{
    int norek;
    string Nama;
    string bank;
    string barang;
};


struct element{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void Createlist_1301213126(List &L);
adr newElm_1301213126(infotype x);
infotype newInfotype_1301213126(int &norek, string nama,string bank, string barang);
void insertFirst_1301213126(List &L, adr P);
void inputAngka_1301213126(int &NUM, int x);
void ReserveList_1301213126();
void ShowAll_1301213126(int NUM);
int average_1301213126(List L);
int selectMenu_1301213126();

#endif // NASABAHBRNG_H_INCLUDED
