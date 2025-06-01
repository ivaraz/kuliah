#include <iostream> //input output
#include <unistd.h> // untuk fungsi usleep
#include <windows.h> // untuk warna
using namespace std;
 
const char rocket[] =
"           _\n\
         / ^ \\\n\
         | - |\n\
         |   |\n\
         | M |\n\
         | E |\n\
         | N |\n\
         | Y |\n\
         | A |\n\
         | L |\n\
         | A |\n\
        /| ! |\\\n\
       / |   | \\\n\
      |  |   |  |\n\
       -- \"\"\" --\n\
          \|\|\|   \n\
          \|\|\|   \n\
";




 
int main() {
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); // Variable Penampung Warna
	
    for (int i = 0; i < 50; i++) cout << endl; // melompat ke bawah konsol
    cout << rocket ;
    SetConsoleTextAttribute(hstdout,14); // Warna
    int j = 300000; // Waktu Delay
    for (int i = 0; i < 50; i++) {
        usleep(j); // bergerak lebih cepat,
        j = (int)(j * 0.9); // waktu sleep
        cout << endl; // memindahkan baris roket ke atas
    }
    
	
	system ("COLOR 6"); // warna
//	Isi Biodata
	cout << "Hello Semuanya!! ini adalah Biodata tentang saya!"<<endl<<endl;
	cout << "#----------------------------------------------#"<<endl;
	cout << "|               BIODATA MAHASISWA              |"<<endl;
	cout << "|            UNIVERSITAS SURYAKANCANA          |"<<endl;
	cout << "#----------------------------------------------#"<<endl;
	SetConsoleTextAttribute(hstdout,10); // Warna
	cout << "| Nama Lengkap : Muhammad Rifa Maulana Aziz    |"<<endl;
	cout << "| NIM/NPM      : 5520124115                    |"<<endl;
	cout << "| Alamat       : Jl.Raya Sukabumi no 80        |"<<endl;
	cout << "|                Kp.Warungkiara ds.Nagrak      |"<<endl;
	cout << "| Fakultas     : Teknik                        |"<<endl;
	cout << "| Prodi        : Teknik Informatika            |"<<endl;
	cout << "| Kelas        : D                             |"<<endl;
	cout << "| Asal Sekolah : SMKN 1 CIANJUR                |"<<endl;
	cout << "#----------------------------------------------#"<<endl;
	cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout << "Sampai Jumpa, dan Jangan Lupa Titik Koma!!";
	cin.get();
    return 0;
}
