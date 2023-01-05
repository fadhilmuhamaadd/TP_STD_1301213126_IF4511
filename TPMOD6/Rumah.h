#ifndef RUMAH_H_INCLUDED
#define RUMAH_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

typedef struct DataRumah infotype;
typedef struct element *adr;


struct DataRumah {
    int ID_faktur;
    string tipe_Rumah;
    int Rumah_Terjual;
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

void Create_list_1301213126(List &L);
adr newElement_1301213126(infotype x);
infotype newInfoType_1301213126(int &ID, string tipe, int terjual);
void insert_first_1301213126(List &L, adr P);
void ShowaStatistik_1301213126(List L);
void ShowAllData_1301213126(List L);
int selectMenu_1301213126();

#endif // RUMAH_H_INCLUDED
