#include <iostream>
using namespace std;

void ganjil (int x);
void genap (int x);
void max (int y);

int main(){
	int i;
	do {
		cout << "Masukkan angka: ";
		cin >> i;
		ganjil (i);
		max (i);
	}
	while (i!=0);
	return 0;
}
void ganjil (int x){
	if ((x%2)!=0)
	cout << "ini bilangan ganjil.\n";
	else genap (x);
}
void genap (int x){
	if ((x%2)==0)
	cout << "ini bilangan genap.\n";
	else ganjil (x);
}
void max (int y){
	if (y > 10)
	exit(0);
}
