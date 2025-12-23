#include<iostream>
using namespace std;

//Write the function printO() here


void printO(int x, int y) {

	if(x <= 0 || y < 0){

		cout << "Invalid input" ;
	}

	for ( int i = 1; i <= x; i++){

		for( int j = 1; j <= y; j++){
			cout << "O" ;
		}
		cout << endl ;
	}
}


int main(){
	
	printO(10,2);
	cout << "\n";
	
	
}
