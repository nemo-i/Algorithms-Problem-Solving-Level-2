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
	 cout << "Sum Of This Array " << SumOfArray(array, totalLength) << endl;
	 cout << "Average Of This Array" << AverageOfArray(array, totalLength) << endl;
}