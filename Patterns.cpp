#include "MyMathLib.h"

void PrintIvertedNumberPattern(short number) {
	for (short i = number; i >=1; i--)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
void PrintNumberPattern(short number) {
	for (short i = 1; i <=number; i++)
	{
		for (short j = i; j >= 1; j--) {
			cout << i;
		}
		cout << endl;
	}
}
void InvertedLetterPattern(short number) {
	for (short i = (number+64); i >= 65; i--)
	{
		for (short j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
void LetterPattern(short number) {
	for (short i = 65; i <= (number+64); i++)
	{
		for (short j = i; j >= 65; j--) {
			cout << char(i);
		}
		cout << endl;
	}
}
void LettersFromThreeAToThreeZ() {
	for (short i = 65; i <= 90; i++)
	{
		for (short j = 65; j <= 90; j++)
		{
			for (short z = 65; z <= 90; z++) {
				cout << char(i) << char(j) <<char(z) <<endl;
			}
		}
	}
}

bool GessPasswordFromThreeLetter(string password) {
	int counter = 0;
	string word;
	for (short i = 65; i <= 90; i++)
	{
		for (short j = 65; j <= 90; j++)
		{
			for (short z = 65; z <= 90; z++) {
				word = word + char(i);
				word = word + char(j);
				word = word + char(z);
				counter++;
				cout << "Trial [" << counter << "] : ";
				cout << word << endl;
				if (word == password) {
					cout << "\nPassword is " << word << "\n";
					cout << "Found after ";
					cout << counter << " Trial(s)\n";
					return true;
				}

				word = "";
			}
		}
	}
	return false;
}

string ReadThreeLetterPassword() {
	string value;
	do {
		cout << "Please Enter Three Letter Passowrd"<<endl;
		cin >> value;
	} while (value.length() != 3);
	return value;
	
}

string encryptText(string text,int increptionkey) {
	string ecryptedText = "";
	for (short i = 0; i < text.length(); i++)
	{
		ecryptedText = ecryptedText + char((int)text[i] + increptionkey);
	}
	return ecryptedText;
}

string decryptText(string text, int increptionkey) {
	string decryptedText = "";
	for (short i = 0; i < text.length(); i++)
	{
		decryptedText = decryptedText + char((int)text[i] - increptionkey);
	}
	return decryptedText;
}


int RandomNumber(int from, int to) {
	// to make this function work probably put this code in main file 
	//srand((unsigned)time(NULL));
	return rand() % (to - from + 1) + from;
}

char Random(enRandom en) {
	// to make this function work probably put this code in main file 
//srand((unsigned)time(NULL));
	switch (en)
	{
	case enRandom::CapticalChar:
	 return	char(RandomNumber(65,90));
		
	case enRandom::SmallChar:
		return	 char(RandomNumber(97, 122));
		
	case enRandom::Digit:
	return	char(RandomNumber(48, 57));
	
	case enRandom::SpecialChar:
	return	char(RandomNumber(35, 38));
		
	default:
		return	char(RandomNumber(35, 38));
	}
}