#include "menu.h"

void Create_List_1301213126(List &FA){
    first(FA) = NULL;
}

adr newElement_1301213126(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insert_last_1301213126(List &FA, adr P){
    adr q;
    q = first(FA);
    while(next(q)!= NULL){
        q = next(q);
    }
    next(q) = P;
}
void inputAngka_1301213126(int &NUM, int x)
{
    NUM = x;
}

void tambah_1301213126(int &NUM, int x)
{
    NUM = NUM + x;
}

void ShowAllData_1301213126(int NUM)
{
    cout<<"Nilai saat ini : " << NUM << endl;
}

int selectMenu_1301213126()
{
    cout<<"===== MENU ====="<<endl;
    cout<<"1. Menambah N data baru" <<endl;
    cout<<"2. Menampilkan semua data" << endl;
    cout<<"3. Longest Name" <<endl;
    cout<<"4. showFirstName" <<endl;
    cout<<"0. Exit" <<endl;
    cout<<"Masukkan menu: ";

    int input = 0;
    cin >> input;

    return input;
}
