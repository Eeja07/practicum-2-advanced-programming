#include <iostream>
#include <string>

using namespace std;

class Barang {
    public:
        string Nama, Harga, Stok;

        Barang(string Nama, string Harga, string Stok){
            Barang::Nama = Nama;
            Barang::Harga = Harga;
            Barang::Stok = Stok;
        }
        void tampilkanData(){
        
            cout << "Nama barang: " << Nama << endl;
            cout << "Harga: " << Harga << endl;
            cout << "Stok: " << Stok << endl;
        }
        void ubahData(string dataBaru, string dataBaru2, string dataBaru3){
            Barang::Nama = dataBaru;
            Barang::Harga = dataBaru2;
            Barang::Stok = dataBaru3;
        }
};

int main()
{
    Barang data[3] =  {  Barang("Buku", "10000", "10"),
                         Barang("Pensil", "2000", "20"),
                         Barang("Penggaris", "5000", "5")};

    cout << "Daftar Barang:" << endl ;
    for (int i = 0; i < 3; i++) {
        cout << "Barang ke-" << i + 1 << endl ;
        data[i].tampilkanData();
    }

    data[0].ubahData("Buku", "10000", "10");
    data[1].ubahData("Pensil", "3000", "20");
    data[2].ubahData("Penggaris", "5000", "10");

    cout << "\nDaftar Barang:" << endl ;
    for (int i = 0; i < 3; i++) {
        cout << "Barang ke-" << i + 1 << endl ;
        data[i].tampilkanData();
    }

    return 0;
}
