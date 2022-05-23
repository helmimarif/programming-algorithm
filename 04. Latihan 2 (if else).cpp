#include <iostream>
using namespace std;

int main(){
	int bilangan;
	//Memberikan informasi agar user memasukkan sebuah bilangan bulat
	cout<<"\t== Program bilangan Positif ==\n\n";
	cout<<"Masukkan bilangan : ";
	//Membaca nilai yang dimasukkan dari keyboard dan disimpan ke variabel Bilangan
	cin>>bilangan;
	//Program ini merupakan contoh if dua kondisi
if(bilangan > 0){
	cout<<"\nAnda memasukkan bilangan Positif\n";
	cout<<"\nBilangan tersebut adalah "<<bilangan;
}
else{
	cout<<"\nAnda memasukkan bilangan kurang dari 1";
	cout<<"\nBilangan tersebut adalah "<<bilangan;
}
return 0;
}
