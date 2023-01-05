#include "Nasabahbrng.h"

int main()
{
    List L;adr P;int NUM = 0, pilihan = 0, x, nData;int norek_nasabah = 1;string nama_nasabah;string bank_nasabah;string barang_nasabah;

    pilihan = selectMenu_1301213126();
    while(pilihan != 0){
        switch(pilihan){
        case 1 :
            cout << "Jumlah data yang akan ditambahkan:";
            cin>> x;
            inputAngka_1301213126(NUM, x);
            int i;
            while(i < nData){
                cout<<"Norek : "<<norek_nasabah<<endl;
                cout<<"Nama : ";cin>>nama_nasabah;
                cout<<"Bank : ";cin>>bank_nasabah;
                cout<<"Barang : ";cin>>barang_nasabah;
                P = newElm_1301213126(newInfotype_1301213126(norek_nasabah,nama_nasabah,bank_nasabah,barang_nasabah));
                insertFirst_1301213126(L,P);

                cout<<endl;
                i++;
            }cout<<nData<<"Data Telah Ditambahkan"<<endl;
            break;

        case 2 :
            ShowAll_1301213126(NUM);
            break;

        case 3 :
            cout << " Masukkan data :";
            cin >> x;
            //ReserveList_1301213126;
            break;

        case 4 :
            cout << " Masukkan Data : ";
            cin >> x;
            //average_1301213126;
            break;
        }

        pilihan = selectMenu_1301213126();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
