#include "MyMathLib.h"

void PrintIvertedNumberPattern(short number) {
	for (short i = number; i >=1; i--)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
void PrintNumberPattern(short number) {
	for (short i = 1; i <=number; i++)
	{
		for (short j = i; j >= 1; j--) {
			cout << i;
		}
		cout << endl;
	}
}
void InvertedLetterPattern(short number) {
	for (short i = (number+64); i >= 65; i--)
	{
		for (short j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
void LetterPattern(short number) {
	for (short i = 65; i <= (number+64); i++)
	{
		for (short j = i; j >= 65; j--) {
			cout << char(i);
		}
		cout << endl;
	}
}