#include <iostream>
using namespace std;

int main(){
	int A[3][4] = {
					{10,15,20,23},
					{5,10,15,20},
					{25,15,5,10},
				};
	
	int B[4][2] = {
					{7,5},
					{4,2},
					{3,3},
					{1,3},
				  };
	
	int C[3][2] = {0};
	
	
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {  
            for (int k = 0; k < 4; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "Hasil perkalian matriks A dan B adalah:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
	
	
	return 0;
}
