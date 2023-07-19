#include "include/keuangan.hpp"

Keuangan::Keuangan() {
    totalPemasukan = 0;
    totalPengeluaran = 0;
}
void Keuangan::tambahPemasukan(int n) {
    totalPemasukan += n;
}

void Keuangan::tambahPengeluaran(int n) {
    totalPengeluaran += n;
}

int Keuangan::hitungSaldo() {
    return totalPemasukan - totalPengeluaran;
}