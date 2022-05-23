#include <iostream>
using namespace std;

int main(){
	// Deklarasi dan inisialisasi array dua dimensi
	// Dengan jumlah elemen baris = 3
	// dan jumlah elemen kolom = 2
	int matrikcontoh [3][2] = {{1,2},{3,4},{5,6}};
	
	// Mendeklarasi variabel untuk indeks perulangan
	int i,j;
	
	cout << "\t==============================";
	cout << "\n\t=== Tampil Matrik Ordo 3x2 ===\n";
	cout << "\t==============================\n\n";
	
	// Menampilkan matrikcontoh
	cout << "\nMenampilkan matrikcontoh\n";
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout << matrikcontoh [i][j]<<" ";
		}
		cout << endl;
	}
	
	return 0;
}
