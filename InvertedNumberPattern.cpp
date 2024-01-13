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