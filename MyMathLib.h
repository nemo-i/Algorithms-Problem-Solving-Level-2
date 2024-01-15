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
int RandomNumber(int from, int to);
char Random(enRandom en);