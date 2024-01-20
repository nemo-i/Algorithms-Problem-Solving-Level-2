#include"MyMathLib.h"
#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int totalLength = 10;

	int array[100] = {10,10,10,20,20,30,50,55,50,70};
	int copiedArray[100];
	int copiedArrayLength =0;
	sArrays arrays;
	
	
	PrintArray(totalLength, array);
	AddDistictNumberToArray(array,totalLength,copiedArray,copiedArrayLength);
	PrintArray(copiedArrayLength,copiedArray);
}