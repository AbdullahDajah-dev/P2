#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ValidationWhile(int from, int to)
{
	int number;
	cout << "Enter your number: ";
	cin >> number;
	while (number < from || number > to)
	{

		cout << "Wrong number please try again: ";
		cin >> number;
	}

	return number;

}
int ValidationDo(int from, int to)
{
	int number;
	do {
		cout << "Enter number between " << from << " and " << to << ": ";
		cin >> number;
	} while (number < from || number > to);
	return number;


}
int Posi()
{
	int number;
	cin >> number;
	while (number < 0)
	{
		cout << "Only positve numbers allowed!" << endl;
		cin >> number;

	}
	return number;

}
int NotZero()
{
	int num;
	cin >> num;
	while (num == 0)
	{
		cout << "Zero not allowed!" << endl;
		cin >> num;

	}
	return num;

}
int ReadPIN()
{
	int pin;
	cout << "Enter PIN: ";
	cin >> pin;
	return pin;

}
void PinLogin()
{
	int pin = ReadPIN();
	int attempts = 3;
	while (pin != 1234 && attempts > 1)
	{
		attempts--;
		cout << "Wrong PIN, Try again (" << attempts << ") left." << endl;
		cin >> pin;
	}

	if (pin == 1234)
	{
		cout << "Access Granted!\nWelcome.";

	}
	else {
		cout << "Accout locked!" << endl;
	}


}





int main()
{
	int i = 0;
	int Search = 20;
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };

	do {

		cout << "we are at iteration " << i + 1 << endl << endl;
		if (Search == arr[i]) {
			cout << Search << " Found at position " << i << endl << endl;
			break;
		}

		i++;
	} while (i <= 10);
	
	











	return 0;
}
