
#include "MyMathLib.h"
#include <string>
#include<iostream>
using namespace std;
// my way
int DigitFrequency(int number,int wholeNumber) {
	int reminder;
	int repate = 0;
	while (wholeNumber >0)
	{
		reminder = wholeNumber % 10;
		if (reminder == number) {
			repate = repate+1;
		}
		
		wholeNumber = wholeNumber / 10;
	}
	return repate;
}
// my way 
void DigitFrequency(int number) {
	int reminder;

	while (number>0)
	{
		reminder = number % 10;
		cout << "Digit " << reminder <<" Frequency Is " << DigitFrequency(reminder, number) <<" Time(s)" << endl;
		number = number / 10;
	}


}
// instructor way 
void CountDigitFrequency(int number) {
	
	for (size_t i = 0; i < 10; i++)
	{
		short DigitFrequany = 0;
		DigitFrequany = DigitFrequency(i,number);
		if (DigitFrequany > 0) {
			cout << "Digit " << i << " Frequency Is " << DigitFrequany << " Time(s)" << endl;
		}
	}
}