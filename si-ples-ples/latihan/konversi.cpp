#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    int desimal, sisa, pangkat, hasil, biner, oktal;
    string heksadesimal;
    
    cout << "Program Konversi Sistem Bilangan" << endl;
    cout << "1. Desimal ke Biner" << endl;
    cout << "2. Desimal ke Oktal" << endl;
    cout << "3. Desimal ke Heksadesimal" << endl;
    cout << "4. Biner ke Desimal" << endl;
    cout << "5. Oktal ke Desimal" << endl;
    cout << "6. Heksadesimal ke Desimal" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
//    	Desimal ke Biner
        case 1:
            cout << "Masukkan bilangan desimal: ";
            cin >> desimal;
            hasil = 0;
            pangkat = 0;
            while (desimal > 0) {
                sisa = desimal % 2;
                hasil += sisa * pow(10, pangkat);
                desimal /= 2;
                pangkat++;
            }
            cout << "Bilangan biner: " << hasil << endl;
            break;

//		Desimal ke Oktal
        case 2:
            cout << "Masukkan bilangan desimal: ";
            cin >> desimal;
            hasil = 0;
            pangkat = 0;
            while (desimal > 0) {
                sisa = desimal % 8;
                hasil += sisa * pow(10, pangkat);
                desimal /= 8;
                pangkat++;
            }
            cout << "Bilangan oktal: " << hasil << endl;
            break;
//		Desimal ke heksadesimal
        case 3:
            cout << "Masukkan bilangan desimal: ";
            cin >> desimal;
            while (desimal > 0) {
                sisa = desimal % 16;
                if (sisa < 10) {
                    heksadesimal = char(sisa + '0') + heksadesimal;
                } else {
                    heksadesimal = char(sisa - 10 + 'A') + heksadesimal;
                }
                desimal /= 16;
            }
            cout << "Bilangan heksadesimal: " << heksadesimal << endl;
            break;
//		Biner ke Desimal
        case 4:
            cout << "Masukkan bilangan biner: ";
            cin >> biner;
            hasil = 0;
            pangkat = 0;
            while (biner > 0) {
                sisa = biner % 10;
                hasil += sisa * pow(2, pangkat);
                biner /= 10;
                pangkat++;
            }
            cout << "Bilangan desimal: " << hasil << endl;
            break;

//		Oktal ke Desimal
        case 5:
            cout << "Masukkan bilangan oktal: ";
            cin >> oktal;
            hasil = 0;
            pangkat = 0;
            while (oktal > 0) {
                sisa = oktal % 10;
                hasil += sisa * pow(8, pangkat);
                oktal /= 10;
                pangkat++;
            }
            cout << "Bilangan desimal: " << hasil << endl;
            break;

//		Heksadesimal ke Desimal
        case 6:
        cout <<        "Masukkan bilangan heksadesimal: ";
        cin >> heksadesimal;
        hasil = 0;
        pangkat = 0;
        for (int i = heksadesimal.size() - 1; i >= 0; i--) {
            if (heksadesimal[i] >= '0' && heksadesimal[i] <= '9') {
                sisa = heksadesimal[i] - '0';
            } else if (heksadesimal[i] >= 'A' && heksadesimal[i] <= 'F') {
                sisa = heksadesimal[i] - 'A' + 10;
            } else if (heksadesimal[i] >= 'a' && heksadesimal[i] <= 'f') {
                sisa = heksadesimal[i] - 'a' + 10;
            }
            hasil += sisa * pow(16, pangkat);
            pangkat++;
        }
        cout << "Bilangan desimal: " << hasil << endl;
        break;

    default:
        cout << "Pilihan tidak valid" << endl;
        break;
}

return 0;

}

