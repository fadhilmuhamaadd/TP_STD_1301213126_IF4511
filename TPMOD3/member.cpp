#include "member.h"

void inputData_1301213126(member &MB) {
    int k;
    cout << "Tuliskan IDNumber : ";
    cin >> MB.IDNumber;
    cout << endl;
    k = 0;
    while (k < Max) {
        cout << "Poin bulan ke-" <<  k+1 << ": ";
        cin >> MB.poin[k];
        cout << endl;
        k++;
    };
};

double ratarata_1301213126(member MB) {
    int i = 0;
    double hasil = 0;
    while (i < Max) {
        hasil += MB.poin[i];
        i++;
    }
    return hasil/Max;
};
void showData_1301213126(member MB) {
    cout << "Data Member: " << endl;
    cout << "IDNumber: " << MB.IDNumber << endl;
    int i = 0;
    cout << "Poin: ";
    while (i < Max) {
        cout << MB.poin[i] << " ";
        i++;
    }
    cout << endl;
};
