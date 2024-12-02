#include <iostream>
using namespace std;

int main() {
  int bil,i;
  bool bil_prima = true;
 
  cout << "Masukan bilangan : ";
  cin >> bil;
 
  if (bil <= 1) {
    bil_prima = false;
  }
  else {
    for (i = 2; i * i <= bil; i++) {
      if (bil % i == 0) {
        bil_prima = false;
        break;
      }
    }
  }
 
  cout << endl;
  
  if (bil_prima){
  	cout << bil << " adalah angka prima";
  } else {
  	cout << bil << " bukan angka prima";
  }
    
 
	return 0;
}
