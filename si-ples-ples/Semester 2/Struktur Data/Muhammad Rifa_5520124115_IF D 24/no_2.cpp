#include <iostream>
using namespace std;

int determinan(int a, int b, int c, int d){
	return ((a * d) - (b * c));
}

int main(){
	int a = 1, b = 2, c = 3, d = 4;
	int matriks[2][2] = 
	{
		{a,b},
		{c,d}
	};
	/////////
	cout << "Matriks 2x2\n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}
	
	
	////////
	cout << "Hasil determinan dari Matriks 2x2 : " << determinan(a,b,c,d);
				
		
	
	return 0;
}
