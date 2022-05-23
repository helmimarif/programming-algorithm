#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	do {
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t): ");
		cin >> ulangi;
		
		// increment counter
		counter++;
	} while(ulangi == 'y');
	
	printf("\n\n----------\n");
	printf("Perulangan Selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
	
	return 0;
}
