#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	// perulangan while
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t): ");
		cin >> ulangi;
		
		// increment counter
		counter++;
	}
	
	printf("\n\n----------\n");
	printf("Perulangan Selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
	
	return 0;
}
