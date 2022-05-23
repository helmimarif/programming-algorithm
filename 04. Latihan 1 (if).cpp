#include <iostream>
using namespace std;

int main(){
	int bilangan;
	//Memberikan informasi agar user memasukkan sebuah bilangan bulat
	cout<<"\t== Program Bilangan Positif ==\n\n";
	cout<<"Masukkan Bilangan : ";
	//Membaca nilai yang dimasukkan dari keyboard dan disimpan ke variabel Bilangan
	cin>>bilangan;
/	/Program ini merupakan contoh if satu kondisi Akan menampilkan sebuah teks jika Bilangan yang dimasukkan > 0
if(bilangan > 0){
	cout<<"\nAnda mamsukkan bilangan Positif\n";
	cout<<"Bilangan tersebut adalah "<<bilangan;
}
return 0;
}
