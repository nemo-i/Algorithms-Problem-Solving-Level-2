#include"MyMathLib.h"
#include<iostream>
#include<string>
#include<math.h>
#include <cstdlib>
using namespace std;
int main() {
	int number = ReadAnyNumber("Please Enter Any Number To Find Absulote \n");
	cout << GetABSNumber(number)<<endl;
}