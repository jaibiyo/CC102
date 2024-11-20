#include <iostream>
using namespace std;

int main()

{
	char answer;
	cout << "are you 16 years old?: [y=yes, n=no]:";
	cin >> answer;
	if (answer== 'y') {
		cout << "better clear the road";
		cin >> answer;
	}
		if (answer== 'n') {
		cout << "are you older than 16?: ";
		cin >> answer;
	}
	if (answer== 'y') {
		cout << "you are too old to drive";
	}
		else if (answer== 'n'){
			cout << "you are to young to drive";
		}
	return 0;
	
}