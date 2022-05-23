#include <iostream>
using namespace std;

int main(void){
	char data[12] = {'a','j','i','k','a','m','a','l','u','d','i','n'};
	char cariin;
	bool got = false;
	int i,get,jum = 12;
	cout << "PENCARIAN SEQUENTIAL\n";
	cout << "====================\n";
	cout << "\nData : \t";
	for(i=0;i<jum;i++){
		cout << "\'" << data[i] << "\'";
	}
	cout << endl;
	cout << "\nData yang anda ingin cari : ";
	cin >> cariin;
	for(i=0;i<jum;i++){
		if(cariin == data[i]){
			got = true;
			get = i;
		}
	}
	if(!got){
		cout << "data tidak ada";
	}
	else{
		cout << "data \"" << cariin << "\" berada di index ke - ";
		for(i=0;i<jum;i++){
			if(cariin == data[i]){
				cout << i << " ";
			}
		}
	}
	return 0;
}
