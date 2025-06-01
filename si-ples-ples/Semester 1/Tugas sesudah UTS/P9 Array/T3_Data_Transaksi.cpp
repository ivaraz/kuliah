#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int jml = 0, harga, jmlbrg, total_harga, total_pendapatan = 0, maks = 100;
    string penjualan[maks][4];
    int total_harga_arr[maks];
    char selesai;

    do {
        if (jml >= maks) {
            cout << "Data Sudah Penuh!\n";
            break;
        }

        cout << "Masukan ID Transaksi : ";
        cin >> penjualan[jml][0];
        cin.ignore();

        cout << "Masukan Nama Produk : ";
        getline(cin, penjualan[jml][1]);

        cout << "Masukan Harga : ";
        cin >> penjualan[jml][2];

        cout << "Masukan Jumlah : ";
        cin >> penjualan[jml][3];

        stringstream h(penjualan[jml][2]), jb(penjualan[jml][3]);
        h >> harga;
        jb >> jmlbrg;

        total_harga = harga * jmlbrg;

        total_harga_arr[jml] = total_harga;

        cout << "Total Harga : " << total_harga << endl;
        total_pendapatan += total_harga; 

        cout << "Transaksi selesai? <y/t> : ";
        cin >> selesai;
        jml++;
        cout << endl;

    } while (selesai != 'y' && selesai != 'Y');

    cout << "Data Transaksi Penjualan:\n";
    cout << "======================================================================================\n";
    cout << "|"
         << setw(12) << "ID Transaksi" << "|"
         << setw(15) << "Nama Produk" << "|"
         << setw(10) << "Harga" << "|"
         << setw(8) << "Jumlah" << "|"
         << setw(12) << "Total Harga" << "|\n";
    cout << "======================================================================================\n";

    for (int i = 0; i < jml; i++) {
        cout << "|"
             << setw(12) << penjualan[i][0] << "|"
             << setw(15) << penjualan[i][1] << "|"
             << setw(10) << penjualan[i][2] << "|"
             << setw(8) << penjualan[i][3] << "|"
             << setw(12) << total_harga_arr[i] << "|\n";
    }

    cout << "======================================================================================\n";
    cout << "Total Pendapatan : " << total_pendapatan << endl;

    return 0;
}

