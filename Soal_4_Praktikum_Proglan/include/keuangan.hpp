class Keuangan {
    public:
        int totalPemasukan;
        int totalPengeluaran;

        Keuangan();
        void tambahPemasukan(int n);
        void tambahPengeluaran(int n);
        int hitungSaldo();
};