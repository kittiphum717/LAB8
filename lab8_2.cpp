#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int n,int m){
	if(n <= 0 or m <= 0){
		cout << "Invalid input" << endl;
	}
	else{
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				cout << "O" ;
			}
			cout << endl;
		}
	}

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
