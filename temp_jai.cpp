#include <iostream>
using namespace std;

int main ()
{

	int temperature;
	cout << " Enter the current temperature: ";
	cin >> temperature;
	
	if (temperature < 32 ) {
		cout << "bring heavy jacket dude!";
	}
		else if (temperature >= 32 && temperature <= 50) {
			cout << "Bring a light jacket please";
		}
	else {
		cout << "Wag kana mag dala ng kahit ano, bahala ka";
	}
return 0;
}