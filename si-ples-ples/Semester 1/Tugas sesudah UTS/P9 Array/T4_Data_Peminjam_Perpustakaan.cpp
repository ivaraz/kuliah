#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int jml, lama_pinjam, minggu_telat, denda_perminggu = 5000, batas_pinjam = 7, denda, maks = 100;
    string anggota_perpus[maks][4];
    char selesai;

    do {
        cout << "No : ";
        cin >> anggota_perpus[jml][0];
        cout << "Nama Anggota : ";
        cin >> anggota_perpus[jml][1];
        cout << "Lama hari peminjaman : ";
        cin >> anggota_perpus[jml][2];

        stringstream lp;
        lp << anggota_perpus[jml][2];
        lp >> lama_pinjam;

        if (lama_pinjam > batas_pinjam) {
            minggu_telat = (lama_pinjam - batas_pinjam) / 7;
            denda = minggu_telat * denda_perminggu;

            if ((lama_pinjam - batas_pinjam) % 7 != 0) {
                denda += denda_perminggu;
            }
        } else {
            denda = 0; 
        }

        stringstream ss_denda;
        ss_denda << denda;
        anggota_perpus[jml][3] = ss_denda.str();

        jml++;
        cout << "Input selesai? <y/t> : ";
        cin >> selesai;
        cout << endl;
    } while (selesai != 'y' && selesai != 'Y');

    cout << "Data Peminjam Buku\n";
    cout << "=======================================================\n";
    cout << "|"
         << setw(2) << "No" << setw(2)
         << "|"
         << setw(9) << "Nama Anggota" << setw(2)
         << "|"
         << setw(13) << "Lama hari peminjaman" << setw(4)
         << "|"
         << setw(7) << "Denda (Rp.)|" << setw(5)
         << "\n=======================================================\n";

    for (int i = 0; i < jml; i++) {
        cout << "| " 
             << setw(1) << anggota_perpus[i][0] << setw(2) 
             << "|" 
             << setw(9) << anggota_perpus[i][1] << setw(5)
             << "|" 
             << setw(13) << anggota_perpus[i][2] << setw(11) 
             << "|" 
             << setw(7) << anggota_perpus[i][3] << setw(6) 
             << "|\n";
    }

    return 0;
}

