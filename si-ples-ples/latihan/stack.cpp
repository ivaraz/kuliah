#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s; // deklarasi stack
	
//	inialisasi stack
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	
//	menghapus elemen pertama
	s.pop();
	
//	menampilkan jumlah stack
	cout << "jumlah dari stack : " << s.size() << endl;
	
//	mengecek apakah isi stack kosong
	cout << "apakah isi stack kosong? : " << s.empty() << endl;
	
//	Menampilkan isi Stack
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	
	
	return 0;
}
