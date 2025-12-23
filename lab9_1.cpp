#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan;
	double rate ;
	double payment;

	double interest ;
	double total ;
	double newbalance ;


	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
int i = 1 ;
	do {
		

		
		cout << setw(13) << left << i ;

		cout << fixed << setprecision(2) ;
		cout << setw(13) << left << loan ;

		interest = loan*(rate/100) ;
		cout << setw(13) << left << interest ;

		total = interest+loan ;
		cout << setw(13) << left << total ;

		if ( payment > total) {

			payment = total ;
		}

		cout << setw(13) << left << payment ;

		newbalance = total-payment ;
		if ( newbalance <= 0 || loan <= 0) {

			newbalance = 0 ;
			total = 0;

		}
		cout << setw(13) << left << newbalance ;

		loan = newbalance ;

		cout << endl ;
		i = i+1 ;


	} while (total > 0) ;
	
	
	return 0;
}
