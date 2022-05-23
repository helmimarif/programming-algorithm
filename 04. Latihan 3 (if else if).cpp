#include <iostream>
using namespace std;

int main(){
	int bil;
	cout<<"Input angka yang akan dicek = ";
	cin>>bil;
if (bil > 0){
	cout<<bil<<" adalah bilangan Positif";
}
else if (bil < 0){
	cout<<bil<<" adalah bilangan Negatif";
}
else{
	cout<<"Anda menginputkan bilangan Nol";
}
}
