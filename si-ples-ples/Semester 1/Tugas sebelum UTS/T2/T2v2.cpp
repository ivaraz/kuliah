#include <iostream>

using namespace std;

int main(){
    string namaLengkap, Prodi, Fakultas, Universitas;
	long double NIM;
    cout << "Masukkan Data Diri Anda : " << endl << endl;
    cout << "Nama        : "; getline(cin, namaLengkap);
    cout << "NIM         : "; cin >> NIM;
    cin.ignore();
    cout << "Prodi       : "; getline(cin, Prodi);
    cout << "Fakultas    : "; getline(cin, Fakultas);
    cout << "Universitas : "; getline(cin, Universitas);

    cout << endl << endl;

    cout << "___________________________________________"<< endl << endl;
    cout << "            BIODATA MAHASISWA              "<< endl;
    cout << "___________________________________________"<< endl << endl;
    cout << "     Nama        : " << namaLengkap         << endl;
    cout << "     NIM         : " << double(NIM)                << endl;
    cout << "     Prodi       : " << Prodi               << endl;
    cout << "     Fakultas    : " << Fakultas            << endl;
    cout << "     Universitas : " << Universitas         << endl << endl;
    cout << "___________________________________________"<< endl;
    cout << "___________________________________________"<< endl;
    cout << "___________________________________________"<< endl;


    cout << endl;

    return 0;
}
