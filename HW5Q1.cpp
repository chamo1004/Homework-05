#include <iostream>
using namespace std;

int integerPower (int, int);

int main ()
{
	int base, exponent;
	
	cout << "Input Base (must be an integer) : ";
	cin >> base;
	
	while
	(exponent <= 0)
	{
		cout << "Input Exponent (must be a positve non-zero interger) : ";
		cin >> exponent;
		
	if 
	(exponent <= 0)
	{
		cout << "Invalid input for exponent, please input again " << endl;
	}
	
	}
	int power =integerPower (base, exponent);
	
	cout << endl << endl;
	cout << base << " ^ " << exponent << " : " << power << endl;
	return 0;
}
int integerPower (int base, int exponent){
	int power = 1;
	
	for (int i=0; i<exponent; i++){
		power*=base;
	}
	return power;
}
