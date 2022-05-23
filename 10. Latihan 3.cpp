#include <iostream>
using namespace std;

int LuasPersegi (int p, int l){
	int luas;
	luas = p*l;
	return luas;
}

int main(){
	int a,b;
	cout << "masukan panjang: ";
	cin >> a;
	cout << "masukan lebar: ";
	cin >> b;
	cout << "Luas Persegi: " << LuasPersegi(a,b);
	return 0;
}
