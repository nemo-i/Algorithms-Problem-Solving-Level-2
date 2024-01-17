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
	FillArrayWithRandomNumbers(totalLength,array);
	 PrintArray(totalLength,array);
	 cout << "Max Number " << MaxNumberInArray(array, totalLength) << endl;
	 cout << "Min Number " << MinNumberInArray(array,totalLength)<<endl;
}