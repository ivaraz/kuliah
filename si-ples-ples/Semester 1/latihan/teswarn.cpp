#include <iostream>  
#include <Windows.h> 
using namespace std; 
 
int main(){  
 
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);      
 
	for(int i=0;i<400;i++){
	SetConsoleTextAttribute(hstdout,i);  
	cout << "Warna  " << i;
	if(i%5==0)cout << endl;
	else cout << "\t";
	}
 
	cout <<endl<<endl;
	system("pause");    
}      
