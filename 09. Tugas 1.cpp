#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]){
	int matA[2][2];
	int matB[2][2];
	int matC[2][2];
	int matD[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Data Matriks A ["<<i<<"] ["<<j<<"] : ";
			cin >> matA[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Data Matriks B ["<<i<<"] ["<<j<<"] : ";
			cin >> matB[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Data Matriks C ["<<i<<"] ["<<j<<"] : ";
			cin >> matC[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matD[i][j] = matA[i][j]+matB[i][j]+matC[i][j];
			cout << setw(3)<<matD[i][j];
		}
		cout << endl;
	}
	return 0;
}
