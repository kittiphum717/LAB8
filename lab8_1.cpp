#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan,irpy,aycppy,prev,interest,total,payment,newbalance;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> irpy;
	cout << "Enter amount you can pay per year: ";
	cin >> aycppy;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2); 
	
	
	prev = loan;
	interest = prev*(irpy/100);
	total = prev + interest;
	payment = aycppy;
	newbalance = total - payment;
	if(newbalance <= 0){
		newbalance = 0;
		cout << setw(13) << left << year; 
		cout << setw(13) << left << prev;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << total;
		cout << setw(13) << left << newbalance << endl;
	}
	else{
		while (newbalance >= 0)
		{
			cout << setw(13) << left << year; 
			cout << setw(13) << left << prev;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			if(newbalance <= 0){
				newbalance = 0;
				cout << setw(13) << left << newbalance << endl;
				break;
			}
			else{
				cout << setw(13) << left << newbalance;
			}
			cout << "\n";
			year += 1;
			prev = newbalance;
			interest = prev*(irpy/100);
			total = prev + interest;
			if(total <= payment){
				payment = total;
			}
			else{
				payment = aycppy;
			}
			newbalance = total - payment;
		}
	}

	return 0;
}
