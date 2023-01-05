#include <iostream>
#include "Rumah.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    List L;adr P;string newData;int ID = 1;string tipe;int terjual;int pilihan,nData;
    Create_list_1301213126(L);

    do{
        system("cls");
        cout<<endl;
        cout<<" ===== MENU ===== "<<endl;
        cout<<" 1. Menambah N data batu "<<endl;
        cout<<" 2. Menampilkan Semua Data "<<endl;
        cout<<" 3. Menampilkan Jumlah Data Penjualan "<<endl;
        cout<<" 0. Exit "<<endl;
        cout<<"Masukkan Pilihan : ";cin>>pilihan;
        switch(pilihan)
        {
            case 1: system("cls");{
                cout<<"Jumlah data yang akan ditambahkan = ";cin>>nData;
                int i;
                while(i < nData){
                    cout<<"Input data ke-"<<ID<<endl;
                    cout<<"Tipe Rumah : ";cin>>tipe;
                    cout<<"Rumah Terjual : ";cin>>terjual;
                    P = newElement_1301213126(newInfoType_1301213126(ID,tipe,terjual));
                    insert_first_1301213126(L,P);

                    cout<<endl;
                    i++;
                }cout<<nData<<" Data telah ditambahkan"<<endl;
                break;
            }
            case 2 : system("cls");{
                cout<< "Menampilkan Data berdasarkan ID"<<endl;
                ShowAllData_1301213126(L);
                break;
            }
            case 3 : system("cls");{
                cout<<"statistik Data \n"<<endl;
                ShowaStatistik_1301213126(L);
                break;
            }
            case 0 : system("cls");{
                return 0;
                break;
            }
            default : system("cls");
            {
                cout<<"\n maaf, pilihan tidak tersedia";
            }
        }
        getch();
    }
    while (pilihan != 4);
}
