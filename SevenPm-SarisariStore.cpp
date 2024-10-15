#include <iostream>
using namespace std;

int main()

{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float USDtoPHP, POUNDtoPHP;
	
	cout << "--------------------------------------------------------" << endl;
	cout << "Price of Product" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "SugarPrice: ";
	cin >> sugarPriceUSD;
	cout << "RicePricePound: ";
	cin >> ricePricePound;
	cout << "SardinesPricePound: ";
	cin >> sardinesPricePound;
	cout << "CoffeePriceUSD: ";
	cin >> coffeePriceUSD;
	cout << "MilkPriceUSD: ";
	cin >> milkPriceUSD;
	
	cout << "--------------------------------------------------------" << endl;
	cout << "Quantity of Product" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "SugarQty: ";
	cin >> sugarQty;
	cout << "riceQty: ";
	cin >> riceQty;
	cout << "SardinesQty: ";
	cin >> sardinesQty;
	cout << "CoffeeQty: ";
	cin >> coffeeQty;
	cout << "MilkQty: ";
	cin >> milkQty;
	
	sugarPricePHP = sugarPriceUSD * USDtoPHP * sugarQty;
	
	
	return 0;
	
}