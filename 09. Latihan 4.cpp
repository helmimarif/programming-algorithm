#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
	int Mat_A[4][4];
	int i,j,k,baris,kolom;
	
	do{
		system("cls");
		cout << "Baris dan kolom tidak boleh lebih dari 4!\n\n";
		cout << "Masukkan banyak baris matriks A : ";
		cin >> baris;
		cout << "Masukkan banyak kolom matriks A : ";
		cin >> kolom;
		
	} while (baris>4 ||kolom>4);
	
	// Membaca elemen-elemen matriks A
	cout << "Matriks A ("<<baris<<"x"<<kolom<<")\n";
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout << "Indeks "<<i<<","<<j<<" = ";
			cin >> Mat_A[i][j];
		}
	} cout << endl;
	
	// Mencetak elemen A
	cout << "\nMatriks A ("<<baris<<"x"<<kolom<<")\n";
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout << setw(3)<<Mat_A[i][j];
		}
		cout << endl;
	}
	getch();
	return 0;
}
