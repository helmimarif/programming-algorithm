#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int kurang(int *c, int *d);
main(){
	int a, b;
	a = 5;
	b = 7;
	
	cout << "Nilai Sebelum Pemanggilan Fungsi";
	cout << "\n a = d b = d" , a, b;
	
	kurang(&a,&b);
	
	cout << "\nNilai Setelah Pemanggilan Fungsi";
	cout << "\n a = d b = d" , a, b;
	getch();
}

int kurang(int *c, int *d){
	*c=*c-3;
	*c=*d-6;
	
	cout << "\n\nNilai di AKhir Fungsi Kurang()";
	cout << "\n c = d d = d\n", *c, *d;
}
