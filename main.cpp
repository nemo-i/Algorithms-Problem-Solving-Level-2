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
	FillArrayWithRandomNumbers(totalLength,array);
	CopyArray(array,totalLength,copiedArray);
	PrintArray(totalLength,copiedArray);
}