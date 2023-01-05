#include "Rumah.h"

void Create_list_1301213126(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr newElement_1301213126(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

infotype newInfoType_1301213126(int &ID, string tipe, int terjual){
    DataRumah rumah;
    rumah.ID_faktur = ID;
    rumah.tipe_Rumah = tipe;
    rumah.Rumah_Terjual = terjual;
    ID++;
    return rumah;
}

void insert_first_1301213126(List &L, adr P){
    if(first(L) == nil && last(L) == nil){
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = first(L);
        first(L) = P;
    }
}

void ShowaStatistik_1301213126(List L){
    int n, total_terjual = 0;
    if (last(L) != nil){
        adr P = last(L);
        while (P != nil){
            cout<<"ID : "<<P->info.ID_faktur<<"\nTipe_Rumah : "<<P->info.tipe_Rumah<<"\nRumah Terjual : "<<P->info.Rumah_Terjual<<"\n";
            total_terjual= total_terjual + P->info.Rumah_Terjual;
            n++;
            P = prev(P);
        }
        cout<<endl;
        cout<<"Jumlah Data yang telah di inputkan : "<<endl;
        cout<<"Jumlah Rumah Terjual : "<<total_terjual<<endl;
        cout<<endl;
    }else{
        cout<<"List Kosong"<<endl;
    }
}
void ShowAllData_1301213126(List L){
    int n, total_terjual = 0;
    if (last(L) != nil){
        adr P = last(L);
        while (P != nil){
            cout<<"ID : "<<P->info.ID_faktur<<"\nTipe_Rumah : "<<P->info.tipe_Rumah<<"\nRumah Terjual : "<<P->info.Rumah_Terjual<<"\n";
            total_terjual= total_terjual + P->info.Rumah_Terjual;
            n++;
            P = prev(P);
        }
        cout<<endl;
    }else{
        cout<<"List Kosong"<<endl;
    }
}


