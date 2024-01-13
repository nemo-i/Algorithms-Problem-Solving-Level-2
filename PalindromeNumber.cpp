#include "MyMathLib.h"
#include <istream>
using namespace std;
enum enPalindrome{
Palindrome,
NotPalindrome,
};
enPalindrome IsNumberPalindrome(int number) {
	int reversed = ReverseNumber(number);
	if (reversed == number) {
		return enPalindrome::Palindrome;
	}
	else {
		return enPalindrome::NotPalindrome;
	}
}


void PrintPalindromeState(int number) {
	if (IsNumberPalindrome(number) == enPalindrome::Palindrome) {
		cout << number << " Is A Palindrome Number" << endl;
	}
	else {
		cout << number << " Not A Palindrome Number" << endl;
	}
}