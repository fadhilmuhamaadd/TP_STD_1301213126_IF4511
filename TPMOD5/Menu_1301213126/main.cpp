#include "menu.h"

int main()
{
    int NUM = 0, pilihan = 0, x;

    pilihan = selectMenu_1301213126();
    while(pilihan != 0){
        switch(pilihan){
        case 1 :
            cout << "Jumlah data yang akan ditambahkan:";
            cin>> x;
            inputAngka_1301213126(NUM, x);
            break;

        case 2 :
            ShowAllData_1301213126(NUM);
            break;

        case 3 :
            cout << " Masukkan data baru:";
            cin >> x;
            tambah_1301213126(NUM,x);
            break;
        }

        pilihan = selectMenu_1301213126();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
