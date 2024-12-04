#include <iostream>

using namespace std;

int main() {

	int num1, num2;
	
	cout << "Enter the First number: ";
	cin >> num1;
	
	cout << "Enter the Second number : ";
	cin >> num2;
	
	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int quotient = num1 / num2;
	int remainder = num1 % num2;
	
	cout << "Sum: " << sum << endl;
	cout << "Difference: " << difference << endl;
	cout << "Product: " << product << endl;
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;
	
	return 0;
}
