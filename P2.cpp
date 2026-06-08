#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadArrayData(int arr1[100], int& Length)
{
	cout << "How many numbers do you want?: ";
	cin >> Length;

	for (int i = 0; i < Length; i++)
	{
		cout << "\nEnter Number (" << i + 1 << ") :" << endl;
		cin >> arr1[i];

	}

}
void PrintArrayData(int arr1[100], int Length)
{
	cout << "\n======================" << endl;
	cout << "\nYour Numbers Are !" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < Length; i++)
	{
		cout << "\nNumber (" << i + 1 << ") = " << arr1[i] << endl;
	}
	
}
int SumArrayData(int arr1[100], int Length)
{
	int sum = 0;
	
	for (int i = 0; i < Length; i++)
	{
		sum += arr1[i];
	}
	
	return sum;

}
float AvgArrayData(int arr1[100], int Length)
{
	return (float)SumArrayData(arr1, Length) / Length;

}


	


int main()
{
	
	int arr1[100], Length = 0;

	ReadArrayData(arr1, Length);
	PrintArrayData(arr1, Length);

	cout << "\n===========================" << endl;
	cout << "      Lets Sum Numbers   " << endl;
	cout << "===========================\n" << endl;
	cout << "The sum of your numbers: " << SumArrayData(arr1, Length) << endl;


	cout << "\n===========================" << endl;
	cout << "     Your numbers Avg   " << endl;
	cout << "===========================\n" << endl;
	cout << "The Avg of your numbers: " << AvgArrayData(arr1, Length)<< endl;



	
	

	

	




	return 0;
}