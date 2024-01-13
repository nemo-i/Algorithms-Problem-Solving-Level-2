
#include "MyMathLib.h"
#include <string>
#include<iostream>
using namespace std;
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
void DigitFrequency(int number) {
	int reminder;

	while (number>0)
	{
		reminder = number % 10;
		cout << "Digit " << reminder <<" Frequency Is " << DigitFrequency(reminder, number) <<" Time(s)" << endl;
		number = number / 10;
	}


}