#include "Nasabahbrng.h"

void Createlist_1301213126(List &L){
    first(L);
    last(L);
}

adr newElm_1301213126(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

infotype newInfotype_1301213126(int &norek_nasabah, string nama_nasabah,string bank_nasabah, string barang_nasabah){
    DataNasabah nasabah;
    nasabah.norek = norek_nasabah;
    nasabah.Nama = nama_nasabah;
    nasabah.bank = bank_nasabah;
    nasabah.barang = barang_nasabah;
    norek_nasabah++;
    return nasabah;
}

void insertFirst_1301213126(List &L, adr P){
    if(first(L) == nil && last(L) == nil){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}

void inputAngka_1301213126(int &NUM, int x)
{
    NUM = x;
}

void ReserveList_1301213126();
void ShowAll_1301213126(int NUM)
{
    cout<<"Nilai saat ini : " << NUM << endl;
}

int average_1301213126(List L);

int selectMenu_1301213126()
{
    cout<<"===== MENU ====="<<endl;
    cout<<"1. Menambah N data baru" <<endl;
    cout<<"2. Menampilkan semua data" << endl;
    cout<<"3. Membalik List" <<endl;
    cout<<"4. Rerata" <<endl;
    cout<<"0. Exit" <<endl;
    cout<<"Masukkan menu: ";

    int input = 0;
    cin >> input;

    return input;
}

