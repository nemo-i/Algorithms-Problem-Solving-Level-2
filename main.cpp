#include"MyMathLib.h"
#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int totalLength = 6;

	int array[100] ;
	int copiedArray[100];
	int copiedArrayLength ;
	sArrays arrays;
	
	FillArrayWithRandomNumbers(totalLength, array);
	PrintArray(totalLength, array);
	cout << "Even Numbers : " << CountEvenNumberInArray(array, totalLength) << endl;
	cout << "Odd Numbers : " << CountOddNumberInArray(array, totalLength) << endl;
}