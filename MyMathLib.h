#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
enum enPalindrome;
int GetHalfNumber(int number);
bool IsRemainingEqualZero(int nom, int dom);
int SumDividableNumber(int number);
bool IsPerfectNumber(int number);
int ReadNumber(std::string msg);
void PrintPrefectNumber(int number);
void PrintPerfectNumberInRange(int to);
void ReverseMyNumber(std::string number);
void ReverseMyNumber(int number);
int ReverseMyNumberInRow(int number);
void PrintNumber(int number);
void PrintNumber(int number, std::string msg);
int ReverseNumber(int number);
int SumOfDigits(int number);
void PrintSumOfDigits(int number);
int DigitFrequency(int number, int wholeNumber);
void DigitFrequency(int number);
void CountDigitFrequency(int number);			
void PrintResversedNumber(int number);
enPalindrome IsNumberPalindrome(int number);
void PrintPalindromeState(int number);
void PrintIvertedNumberPattern(short number);
void PrintNumberPattern(short number);
void InvertedLetterPattern(short number);
void LetterPattern(short number);
void LettersFromThreeAToThreeZ();
bool GessPasswordFromThreeLetter(string password);
string ReadThreeLetterPassword();
string encryptText(string text, int increptionkey);
string decryptText(string text, int increptionkey);
enum enRandom {
	CapticalChar,
	Digit,
	SmallChar,
	SpecialChar,
};
struct sArrays {
	int array1[100];
	int array2[100];
	int sumArray[100];
	int totalLength;
};
int RandomNumber(int from, int to);
char Random(enRandom en);
void PrintKeys(int NumberOfKeys);
string GnereateKeys();
int ReadPostiveNumber(string msg);
void ReadArray(int& totalLength, int array[100]);
void PrintArray(int totalLength, int array[]);
int TimesRepeted(int numberToCheck, int totalArrayLength, int array[]);
void FillArrayWithRandomNumbers(int& totalLength, int array[100]);
int MaxNumberInArray(int array[], int& totalLength);
int MinNumberInArray(int array[], int& totalLength);
int SumOfArray(int array[], int& totalLength);
float AverageOfArray(int array[], int& totalLength);
void CopyArray(int orginalArray[100], int orginalArrayTotalLength, int copiedArray[100]);
bool IsPrimeNumber(int number);
void CopyPrimeNumbersFromAnyArray(int sourceArray[100], int totalLength, int distenationArray[100], int& distenationLength);
bool IsPostiveNumber(int number);

void SumOfTwoArrays(sArrays& arrays);
void ReverseArray(int array1[100], int array2[100], int length);
void FillArrayWithRandomKeys(string array[100], int length);
void PrintArrayWithKeys(string array[100], int length);
int GetItemIndexInIntArray(int array[100], int length, int itemToSearch);
void PrintItemLocationInArray(int index);
bool IsItemInIntArray(int array[100], int length, int itemToSearch);
void FillIntArray(int array[100], int& length);
int ReadAnyNumber(string msg);
void CopyArrayWithAddArrayElement(int array[100], int length, int desArray[100], int& destLength);
void AddArrayElement(int array[100], int& length, int item);
bool IsOddNumber(int number);
void AddOnlyOddNumberToArray(int array[100], int length, int desArray[100], int& desLength);
void AddOnlyPrimeNumbersToArray(int array[100], int length, int desArray[100], int& desLength);
void AddDistictNumberToArray(int array[100], int length, int desArray[100], int& desLength);

bool IsArrayPalindrome(int array[100], int length);
int CountOddNumberInArray(int array[100], int length);
int CountEvenNumberInArray(int array[100], int length);
int CountPostiveNumberInArray(int array[100], int length);
void FillArrayWithRandomNumbers(int& totalLength, int array[100], int from, int to);