#include"MyMathLib.h"
#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int totalLength ;

	int array[100] ;
	int copiedArray[100];
	int copiedArrayLength ;
	sArrays arrays;
	
	FillArrayWithRandomNumbers(totalLength, array,-100,100);
	PrintArray(totalLength, array);
	cout << "Postive Numbers : " << CountPostiveNumberInArray(array, totalLength) << endl;
	//cout << "Odd Numbers : " << CountOddNumberInArray(array, totalLength) << endl;
}