#include <iostream>
using namespace std;

int main(){
	int gg;
	cout<<"\t== Program bilangan Ganjil Genap ==\n\n";
	cout<<"Masukkan bilangan : ";
	cin>>gg;
if (gg % 2 == 0){
	cout<<"\n"<<gg<<" adalah bilangan Genap";
}
else{
	cout<<"\n"<<gg<<" adalah bilangan Ganjil";
}
return 0;
}
