#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    listjadwal L;
    int n = 3;
    int i = 1;
    string kode, jenis, waktu, asal, tujuan, dari, ke, tanggal;
    int kapasitas;
    adr_jadwal P;
    infotype x;

    createlistjadwal_1301213126(L);
    while ( i <= n){
        cout << "Data ke-" << i << endl;
        cout << "Masukkan Kode : ";
        cin >> kode;
        x.kode = kode;
        cout << "Masukkan Jenis: ";
        cin >> jenis;
        x.jenis = jenis;
        cout << "Masukkan Tanggal : ";
        cin >> tanggal;
        x.tanggal = tanggal;
        cout << "Masukkan Waktu : ";
        cin >> waktu;
        x.waktu = waktu;
        cout << "Masukkan Asal : ";
        cin >> asal;
        x.asal = asal;
        cout << "Masukkan Tujuan : ";
        cin >> tujuan;
        x.tujuan = tujuan;
        cout << "Masukkan Kapasitas : ";
        cin >> kapasitas;
        x.kapasitas = kapasitas;
        P = createelemenjadwal_1301213126(x);
        insertlastj_1301213126(L,P);
        i++;
    }
    cout<< endl;
    cout << "Print sebelum hapus"<< endl;
    showjadwal_1301213126(L);
    deletefirstj_1301213126(L,P);
    cout << endl;
    cout << "Print setelah hapus"<< endl;
    showjadwal_1301213126(L);
    cout << endl;
    cout << "Cari Jadwal :" << endl;
    cout << "Masukkan Asal : ";
    cin >> dari;
    cout << "Masukkan Tujuan : ";
    cin >> ke;
    cout << "Masukkan Tanggal : ";
    cin >> tanggal;

    cout << endl;

    if (search_j_1301213126(L, dari, ke, tanggal)){
        cout << "Jadwal Ditemukan!" << endl;
        adr_jadwal P = First(L);
        if (info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal){
            cout << info(P).kode << endl;
            cout << info(P).jenis << endl;
            cout << info(P).tanggal<< endl;
            cout << info(P).waktu << endl;
            cout << info(P).asal<<endl;
            cout << info(P).tujuan << endl;
            cout << info(P).kapasitas << endl;
        }else {
            P = next(P);
        }
    if(!search_j_1301213126(L,dari,ke,tanggal)) {
        cout << "Jadwal Tidak Ditemukan!" << endl;
    }
    return 0;
    }
}
