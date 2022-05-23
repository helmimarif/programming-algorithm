#include <iostream>
using namespace std;

int main(){
	int jml;
	int i;
	int cari;
	int arr[100];
	int tanda=-1;
	
	cout << "Masukkan banyaknya bilangan = ";
	cin >> jml;
	
	for(i=0;i<jml;i++){
		cout << "Masukkan bilangan ke-" <<i+1<< " : ";
		cin >> arr[i];
	}
	
	cout << "Isi dari array : " <<endl;
	for(i=0;i<jml;i++)
		cout << " "<<arr[i];
		
	cout << "\n\nMasukkan data yang dicari = ";
	cin >> cari;
	
	for(i=0;i<jml;i++){
		if(cari==arr[i]){
			tanda=i;break;
		}
	}
	if(tanda!=-1)
		cout << "\n\n Data ditemukan";
	else
		cout <<"\n\n Data tidak ditemukan";
	return 0;
}
