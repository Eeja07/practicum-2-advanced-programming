#include <iostream>
#include "keuangan.cpp"
#include "pemasukan.cpp"
#include "pengeluaran.cpp"
#include <vector>

using namespace std;

int main (){
    Keuangan FIA;
    vector<Pemasukan*> riwayat1;
    vector<Pengeluaran*> riwayat2;

    string ket;
    int n = 0, opsi=0;
    while (opsi != 4 )
    {
    cout << "\nSaldo FIA" << endl;
    cout << "1. Pemasukan Baru" << endl;
    cout << "2. Pengeluaran Baru" << endl;
    cout << "3. Tampilkan Riwayat Saldo" << endl;
    cout << "Pilih Opsi: ";
    cin >> opsi;

    if (opsi==1)
    {
        cout << "Masukkan Nominal: ";
        while (!(cin >> n) || n <= 1 || n >= 1000000) {
            cout << "Masukkan Ulang: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();
        cout << "Berikan Keterangan: ";
        getline(cin, ket);
        FIA.tambahPemasukan(n);
        riwayat1.push_back(new Pemasukan(n, ket));    
    }
    else if (opsi==2)
    {
        
        cout << "Masukkan Nominal: ";
        while (!(cin >> n) || n <= 1 || n >= 1000000) {
            cout << "Masukkan Ulang: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();
        cout << "Berikan Keterangan: ";
        getline(cin, ket);
        FIA.tambahPengeluaran(n);
        riwayat2.push_back(new Pengeluaran(n, ket)); 
    }
    else if (opsi == 3) 
    {
        cout << "\nSaldo : " << FIA.hitungSaldo() << endl;
            if (riwayat1.size() + riwayat2.size() != 0) {
                cout << "\nKeterangan Pemasukkan : " << endl;
                for (Pemasukan* ketPemasukan : riwayat1)   cout << ketPemasukan->deskripsi << " " << ketPemasukan->nilai << endl;
                cout << "\nKeterangan Pengeluaran : " << endl;
                for (Pengeluaran* ketPengeluaran : riwayat2) cout << ketPengeluaran->deskripsi << " " << ketPengeluaran->nilai << endl;
                cout << endl;
            }   else cout << endl;
    }
    else
    {
        break;
    }
    }
    return 0;   
}