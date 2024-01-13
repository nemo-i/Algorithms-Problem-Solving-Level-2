#include <iostream>
using namespace std;
int SumOfDigits(int number) {
	int sum = 0;
	while (number>0)
	{
		
		int reminder = number % 10;
		sum += reminder;
		number = number / 10;
	}
	return sum;
}

void PrintSumOfDigits(int number) {
	cout << "Sum Of Digits = " << SumOfDigits(number)<<endl;
}