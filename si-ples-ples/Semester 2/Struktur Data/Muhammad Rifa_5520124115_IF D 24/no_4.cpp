#include <iostream>
using namespace std;

const int KOTA = 3;
const int HARI = 7;
const int MINGGU = 2;

void hitungRataRata(float suhu[KOTA][MINGGU][HARI]) {
    for (int k = 0; k < KOTA; k++) {
        float total = 0;
        for (int m = 0; m < MINGGU; m++) {
            for (int h = 0; h < HARI; h++) {
                total += suhu[k][m][h];
            }
        }
        float rataRata = total / (MINGGU * HARI);
        cout << "Rata-rata suhu kota " << k + 1 << " adalah: " << rataRata << " derajat\n";
    }
}

int main() {
    float suhu[KOTA][MINGGU][HARI];
    
    for (int k = 0; k < KOTA; k++) {
        cout << "Masukkan suhu untuk Kota " << k + 1 << " selama 2 minggu (7 hari/minggu):\n";
        for (int m = 0; m < MINGGU; m++) {
            for (int h = 0; h < HARI; h++) {
                cout << "Minggu " << m + 1 << ", Hari " << h + 1 << ": ";
                cin >> suhu[k][m][h];
            }
        }
    }
    
    hitungRataRata(suhu);
    
    return 0;
}

