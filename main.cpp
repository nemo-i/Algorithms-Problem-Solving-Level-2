#include"MyMathLib.h"
#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int totalLength;

	int array[100];
	int copiedArray[100];
	int copiedArrayLength =0;
	sArrays arrays;
	
	FillArrayWithRandomNumbers(totalLength,array);
	PrintArray(totalLength, array);
	AddOnlyOddNumberToArray(array,totalLength,copiedArray,copiedArrayLength);
	PrintArray(copiedArrayLength,copiedArray);
}