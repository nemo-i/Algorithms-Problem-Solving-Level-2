#include<iostream>
using namespace std;
int GetHalfNumber(int number) {
	return number / 2;
}

bool IsRemainingEqualZero(int nom, int dom) {
	return nom % dom == 0;
}


int SumDividableNumber(int number) {
	int HalfNumber = GetHalfNumber(number);
	int sum = 0;
	for (int i = 1; i <= HalfNumber; i++)
	{
		if (IsRemainingEqualZero(number, i)) {
			sum += i;
		}
	}
	return sum;
}
bool IsPerfectNumber(int number) {
	return SumDividableNumber(number) == number;
}

int ReadNumber() {
	int number;
	cout << "Please Enter Number To Check If It's Perfect Or Not:" << endl;
	cin >> number;
	return number;

}

void PrintPrefectNumber(int number) {
	if (IsPerfectNumber(number)) {
		cout << number << " Is Perfect Number" << endl;
	}
	else {
		//cout << number << " Is Not Pefect Number:" << endl;
	}
}
void PrintPerfectNumberInRange(int to) {
	for (int i = 1; i <= to; i++)
	{
		PrintPrefectNumber(i);
	}
}