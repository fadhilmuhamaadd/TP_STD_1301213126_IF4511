#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(FA) (((FA)).first)

typedef char infotype;

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void Create_List_1301213126(List &FA);
adr newElement_1301213126(infotype x);
void insert_last_1301213126(List &FA, adr P);
void inputAngka_1301213126(int &NUM, int x);
void tambah_1301213126(int &NUM,int x);
void ShowAllData_1301213126(int NUM);
int selectMenu_1301213126();
adr longestName(List &FA);
void showFirstKName(List &FA, int K, char C);


#endif // MENU_H_INCLUDED
