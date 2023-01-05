#include "CSLL.h"

void create_list_1301213126(listlagu &L){
    first(L) =NULL;
}

adr createElement_1301213126(infotype lagubaru){
    adr P = new element;
    info(P) = lagubaru;
    next(P) = NULL;
    return P;
}

void insertlast_1301213126(listlagu &L, adr P){
    if(first(L) == NULL){
        first(L) = P;
        next(P) = first(L);
    }
    else{
        adr q = next(first(L));
        while(next(q) != first(L)){
            q = next(q);
        }
        next(q) = P;
        next(P) = first(L);
    }
}

adr deletefirst_1301213126(listlagu &L){
    adr P;
    if(next(first(L)) == first(L)){
        P = first(L);
        next(P) = NULL;
        first(L) = NULL;
        return P;
    }else{
        adr q = next(first(L));
        while(next(q) != first(L)){
            q = next(q);
        }
        P = first(L);
        first(L) = next(P);
        next(q) = first(L);
        return P;
    }
}

void showSemualagu_1301213126(listlagu L){
    adr P = first(L);
    if(P == NULL){
        cout<<" Data Kosong "<<endl;
    } else{
        do{
            cout<<info(P).Judul<<" - "<<info(P).Artis<<"("<<info(P).Genre<<") : "<<info(P).playtime<<endl;
            P = next(P);
        }
        while(P != first(L));
        cout<<"---selesai---"<<endl;
    }
}
