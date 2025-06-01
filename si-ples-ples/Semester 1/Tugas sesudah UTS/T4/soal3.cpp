#include <iostream>
using namespace std;

// Muhammad Rifa Maulana Aziz
// IF - D
// 5520124115

int main() {
	// mendeklarasi variabel
    int a, b;
    bool bil_prima;

    // Input untuk nilai A dan B
    cout << "Masukan nilai A : ";
    cin >> a;
    cout << "Masukan nilai B : ";
    cin >> b;
	
	// hasil dari A dan B
    cout << "Bilangan prima antara " << a << " dan " << b << " adalah: ";

    // Mencari bilangan prima diantara A dan B
    for (int i = a; i <= b; i++) {
        bil_prima = true; // menginialisasi variabel diisi dengan bool true

        if (i <= 1) {
            bil_prima = false;  // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
        } else {
            // Mengecek apakah i memiliki faktor selain 1 dan i
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) { // pengkondisian jika i habis dibagi j
                    bil_prima = false; // mengubah variabel bil_prima jadi false
                    break; // menghentikan perulangan, ketika kondisi sudah memenuhi
                }
            }
        }

        // Jika i adalah bilangan prima, output/keluarkan i
        if (bil_prima) {
            cout << i << " "; // output nilai, jika memenuhi kondisi
        }
    }
    cout << endl;

    return 0;
}

