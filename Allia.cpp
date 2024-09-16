#include <iostream>
using namespace std;

int main() {
    char tipeRmh, jenisPmbyran;
    long hrgaTunai, angsuranPerBln, ttlHrgaRmh;

    cout << "Masukkan Tipe Rumah (A, B, C, D): ";
    cin >> tipeRmh;
    cout << "Masukkan Jenis Pembayaran (T = Tunai, K = Kredit): ";
    cin >> jenisPmbyran;

    if (tipeRmh == 'A' || tipeRmh == 'a') {
        hrgaTunai = 50000000;
        angsuranPerBln = 500000;
    } else if (tipeRmh == 'B' || tipeRmh == 'b') {
        hrgaTunai = 75000000;
        angsuranPerBln = 750000;
    } else if (tipeRmh == 'C' || tipeRmh == 'c') {
        hrgaTunai = 85000000;
        angsuranPerBln = 850000;
    } else if (tipeRmh == 'D' || tipeRmh == 'd') {
        hrgaTunai = 100000000;
        angsuranPerBln = 1000000;
    } else {
        cout << "Tipe rumah tidak valid." << endl;
        return 1;
    }

    if (jenisPmbyran == 'T' || jenisPmbyran == 't') {
        cout << "Harga Rumah Tunai: Rp " << hrgaTunai << endl;
    } else if (jenisPmbyran == 'K' || jenisPmbyran == 'k') {
        ttlHrgaRmh = 12 * angsuranPerBln * 10;
        cout << "Angsuran per Bulan: Rp " << angsuranPerBln << endl;
        cout << "Total Harga Rumah (10 tahun): Rp" << ttlHrgaRmh << endl;
    } else {
        cout << "jenis pembayaran tidak valid." << endl;
        return 1;
    }

    return 0;
}
