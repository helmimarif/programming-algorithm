#include <iostream>
using namespace std;

int main(){
	int bilangan [3][4]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	
	for(int a=0;a<3;a++){
		for(int b=0;b<4;b++){
			cout << "Pada index ke-" << a << "," << b << " adalah " << bilangan [a][b] << endl;
		}
	}
	return 0;
}
