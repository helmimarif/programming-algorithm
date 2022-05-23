#include <iostream>
using namespace std;

int main(){
	
	string username, password;
	
	cout << "=== Welcome ===" << endl;
	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	
	if (username == "helmimarif"){
		if (password == "203200127"){
			cout << "Selamat datang!" << endl;
		} else {
			cout << "Password salah, coba lagi!" << endl;
		}
	} else {
		cout << "Anda tidak terdaftar" << endl;
	}
	
	return 0;
}
