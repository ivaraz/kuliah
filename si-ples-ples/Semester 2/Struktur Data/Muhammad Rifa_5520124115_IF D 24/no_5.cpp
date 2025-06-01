#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;

void cariMaksimum(int arr[SIZE][SIZE][SIZE]) {
    int maxVal = arr[0][0][0];
    int x = 0, y = 0, z = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                    x = i;
                    y = j;
                    z = k;
                }
            }
        }
    }

    cout << "Nilai maksimum: " << maxVal << " pada koordinat (" << x << ", " << y << ", " << z << ")\n";
}

int main() {
    int arr[SIZE][SIZE][SIZE];
    srand(time(0));

    cout << "Array 3D:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                arr[i][j][k] = rand() % 100; 
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    cariMaksimum(arr);
    
    return 0;
}

