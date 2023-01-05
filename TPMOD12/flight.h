#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define First(L) ((L).First)

struct jadwalpenerbangan{
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwal;
typedef struct jadwalpenerbangan infotype;
struct elemenJadwal{
    infotype info;
    adr_jadwal next;
};

struct listjadwal{
    adr_jadwal First;
};

void createlistjadwal_1301213126(listjadwal &L);
adr_jadwal createelemenjadwal_1301213126(infotype x);
void insertlastj_1301213126(listjadwal &L, adr_jadwal P);
void showjadwal_1301213126(listjadwal L);
void deletefirstj_1301213126(listjadwal &L, adr_jadwal P);
bool search_j_1301213126(listjadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
