#include <iostream>
using namespace std;


// Object Oriented Programming
	class Karyawan {
		private:
			int gaji;
		
		public:
			void upah(int uang){
				gaji = uang;
			}
			
			int hasil() {
				return gaji;
			}
	};
	
	int main() {
		Karyawan set;
		
		set.upah(50000000);
		cout << "Gaji karyawan bulan sekarang adalah Rp." << set.hasil();
		return 0;
	}
