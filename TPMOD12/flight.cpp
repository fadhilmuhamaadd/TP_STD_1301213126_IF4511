#include "flight.h"

void createlistjadwal_1301213126(listjadwal &L){
    First(L) = NULL;
}

adr_jadwal createelemenjadwal_1301213126(infotype x){
    adr_jadwal P = new elemenJadwal;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertlastj_1301213126(listjadwal &L, adr_jadwal P){
    if(First(L) == NULL){
        First(L) = P;
        next(P) = NULL;
    }
    else if(next(First(L)) == NULL){
        next(First(L)) = P;
        next(P) = NULL;
    }
    else{
        adr_jadwal Q = First(L);
        while (next(Q) != NULL){
        Q = next(Q);
        }
        next(Q) = P;
        next(P) = NULL;
    }
}

void showjadwal_1301213126(listjadwal L){
    adr_jadwal P = First(L);
    while ( next(P) != NULL){
        cout <<"[" <<info(P).kode << " "<<info(P).jenis <<" "<<info(P).tanggal << " " << info(P).waktu << " " << info(P).asal << " " << info(P).tujuan << " "<< info(P).kapasitas << "]"<<"-";
        P = next(P);
    }
    cout <<"[" <<info(P).kode << " "<<info(P).jenis <<" "<<info(P).tanggal << " " << info(P).waktu << " " << info(P).asal << " " << info(P).tujuan << " "<< info(P).kapasitas << "]"<<"-";
    cout << endl;
}

void deletefirstj_1301213126(listjadwal &L, adr_jadwal P){
    if (First(L) == NULL){
        cout << "List Kosong" << endl;
    } else if (next(First(L)) == NULL){
        First(L) = NULL;
    } else {
        P = First(L);
        First(L) = next(P);

    }
}

bool search_j_1301213126(listjadwal L, string dari, string ke, string tanggal){
    adr_jadwal P = First(L);
    while (P != NULL) {
        if (info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal){
            return true;
        } else {
            P = next(P);
        }
    }
    return false;
}
