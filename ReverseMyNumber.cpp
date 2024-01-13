#include <iostream>
using namespace std;
#include <string>
// this what did 
void ReverseMyNumber(string number) {
	for (short i = number.length() - 1; i >=0 ; i--)
	{
		cout << number[i] << endl;
	}
}
// instructor solution was incridable for me 
void ReverseMyNumber(int number) {
	int remainder;
	while (number>0)
	{
		remainder = number % 10;
		number = (int)number / 10;
		cout << remainder << endl;
	}
}
// this what i did 
int ReverseMyNumberInRow(int number) {
	string remainder = "";
	while (number > 0)
	{
		int rem = number % 10;
		number = (int)number / 10;
		remainder = remainder+to_string(rem);
	}
	return stoi(remainder);
}
void PrintNumber(int number,std::string msg) {
	cout <<msg<< number << endl;
}
void PrintNumber(int number) {
	cout << number << endl;
}
// this is instructor solution
int ReverseNumber(int number) {
	int remainder = 0;
	int number2 = 0;
	while (number>0)
	{
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}
	return number2;
}
void PrintResversedNumber(int number) {
	int reminder = 0;
	while (number>0)
	{
		reminder = number % 10;
		number = number / 10;
		cout << reminder << endl;
	}
}