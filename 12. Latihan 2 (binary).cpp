#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int nilai[10],jumlah,i,j,cari,tukar,kanan,kiri,tengah,tm;
	cout << "Masukkan jumlah data = ";
	cin >> jumlah;
	
	for(i=0;i<jumlah;i++){
		cout << "Masukkan data ke - " << (i+1) << " = ";
		cin >> nilai[i];
	}
	cout << "Masukkan data yang akan anda cari : ";
	cin >> cari;
	
	for(i=0;i<jumlah;i++){
		for(j=i+1;j<jumlah;j++){
			if(nilai[i]>nilai[j]){
				tukar=nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=tukar;
			}
		}
	}
	tm=0;
	kanan=jumlah;
	kiri=0;
	
	while(kanan>=kiri){
		tengah=(kanan + kiri)/2;
		if(nilai[tengah]==cari){
			tm++;
		}
		if(nilai[tengah]<cari){
			kiri=tengah+1;
		}
		else{
			kanan=tengah-1;
		}
	}
	if(tm>0){
		cout << "Data " << cari << " yang dicari adalah array" << endl;
	}
	getch();
}
