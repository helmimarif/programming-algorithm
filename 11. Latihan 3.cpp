#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void garis(){
	cout <<"\n=========================================\n";
}

void inputdata(){
	char nama[30], alamat[30];
	cout << "Masukkan Nama: ";
	gets(nama);
	cout << "Masukkan Alamat: ";
	gets(alamat);
}

void HitungGaji(){
	int Gapok, tunjangan, total;
	cout << "Masukkan Gaji Pokok : ";
	cin >> Gapok;
	tunjangan = 0.1 * Gapok;
	total = Gapok+tunjangan;
	cout << "Total Gaji yang diterima adalah " << total;
}

main(){
	cout << "Menghitung Gaji Karyawan\n";
	cout << "Tunjangan sebesar 10% dari gaji pokok\n";
	garis();
	inputdata();
	HitungGaji();
	garis();
	getch();
}
