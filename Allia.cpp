#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char tipeRumah, jenisPembayaran;
    int hargaTunai, angsuranPerBulan;

    // Input tipe rumah dan jenis pembayaran
    cout << "Masukkan Tipe Rumah (A/B/C/D): ";
    cin >> tipeRumah;
    cout << "Masukkan Jenis Pembayaran (T = Tunai, K = Kredit): ";
    cin >> jenisPembayaran;

    // Tentukan harga sesuai tipe rumah
    if (tipeRumah == 'A' || tipeRumah == 'a') {
        hargaTunai = 50000000;
        angsuranPerBulan = 500000;
    } else if (tipeRumah == 'B' || tipeRumah == 'b') {
        hargaTunai = 75000000;
        angsuranPerBulan = 750000;
    } else if (tipeRumah == 'C' || tipeRumah == 'c') {
        hargaTunai = 85000000;
        angsuranPerBulan = 850000;
    } else if (tipeRumah == 'D' || tipeRumah == 'd') {
        hargaTunai = 100000000;
        angsuranPerBulan = 1000000;
    } else {
        cout << "Tipe rumah tidak valid." << endl;
        return 1;
    }

    // Output sesuai jenis pembayaran
    if (jenisPembayaran == 'T') {
        cout << "Harga Rumah Tunai: Rp " << hargaTunai << endl;
    } else if (jenisPembayaran == 'K') {
        cout << "Angsuran per Bulan: Rp " << angsuranPerBulan << endl;
        cout << "Total Harga Kredit (10 tahun): Rp " << angsuranPerBulan * 12 * 10 << endl;
    } else {
        cout << "Jenis pembayaran tidak valid." << endl;
        return 1;
    }

    return 0;
}
