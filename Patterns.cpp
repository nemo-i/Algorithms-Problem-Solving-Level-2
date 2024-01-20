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
void PrintKeys(int NumberOfKeys) {
	for (short i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key[" << i << "]:" << GnereateKeys() << endl;
	}
}
string GnereateKeys() {
	string key = "";
	for (short i = 1; i <= 4; i++)
	{
		for (short j = 1; j <= 4; j++)
		{
			key=  key+Random(enRandom::CapticalChar);
		}
		if (i < 4) {
			key = key + "-";
		}
	}
	return key;
}

string GenerateKey(int keyLength,enRandom keyType) {
	string key = "";
	for (short i = 0; i < keyLength; i++)
	{
		key = key + Random(keyType);
	}
	return key;
}


int ReadPostiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;;
		cin >> number;
	} while (number<=0);
	
	return number;
}
int ReadAnyNumber(string msg) {
	int number;
	cout << msg ;
	cin >> number;
	return number;
}

void FillArrayWithRandomNumbers(int& totalLength, int array[100]) {
	// to make this function work probably put this code in main file 
//srand((unsigned)time(NULL));
	cout << "Enter Array Length" << endl;
	cin >> totalLength;
	for (short i = 0; i < totalLength; i++)
	{
		array[i]= RandomNumber(1,100);
	}
}

void ReadArray(int &totalLength, int array[100]) {
	cout << "Enter Array Length" << endl;
	cin >> totalLength;
	cout << "Enter Array Elements" << endl;
	for (short i = 0; i < totalLength; i++)
	{
		cout << "Element [" << i + 1 << "]:";
		cin >> array[i];
	}

}
void PrintArray(int totalLength, int array[]) {
	for (short i = 0; i < totalLength; i++)
	{
		cout << array[i] << " ";
	
	}
	cout << "\n";
}

int TimesRepeted(int numberToCheck, int totalArrayLength, int array[]) {
	int counter = 0;
	for (short i = 0; i < totalArrayLength; i++)
	{
		if (numberToCheck == array[i]) {
			counter+=1;
		}
	}
	return counter;
};

// [ 1,2,3,6,7]
int MaxNumberInArray(int array[],int &totalLength) {
	int holder =0;
	for (int i = 0; i < totalLength; i++) {
		if (array[i] > array[i + 1]) {
			if (array[i] > holder) {
				holder = array[i];
			}
		}
		else
		{
			if (array[i + 1] > holder) {
				holder = array[i + 1];
			}
		}
	}
	return holder;
}
int MinNumberInArray(int array[], int& totalLength) {
	int holder = MaxNumberInArray(array,totalLength);
	for (int i = totalLength-1; i >0; i--) {
		if (array[i] < array[i - 1]) {
			if (array[i] < holder) {
				holder = array[i];
			}
		}
		else
		{
			if (array[i - 1] < holder) {
				holder = array[i - 1];
			}
		}
	}
	return holder;
}
//int MinNumberInArray(int array[], int& totalLength) {
//	int holder = MaxNumberInArray(array, totalLength);
//
//	for (short i = totalLength-1; i > 0; i--)
//	{
//		if (array[i] < holder) {
//			holder = array[i];
//		}
//	}
//	return holder;
//}

int SumOfArray(int array[], int& totalLength) {
	int sum = 0;
	for (short i = 0; i <totalLength; i++)
	{
		sum += array[i];
	}
	return sum;
}
float AverageOfArray(int array[], int& totalLength) {
	int sum = (float)SumOfArray(array,totalLength);
	return (float)sum / totalLength;

}


void CopyArray(int orginalArray[100], int orginalArrayTotalLength,int copiedArray[100]) {
	for (short i = 0; i < orginalArrayTotalLength; i++)
	{
		copiedArray[i] = orginalArray[i];
	}
}

bool IsPostiveNumber(int number) {
	return number > 0;
}

bool IsPrimeNumber(int number) {
	int halfNumber = (int)GetHalfNumber(number);


	for (short i = 2; i <= halfNumber; i++)
	{
		if (number % i == 0) {
			return 0;
			break;
		}
		
	}
	return 1;
};
	


void CopyPrimeNumbersFromAnyArray(int sourceArray[100], int totalLength, int distenationArray[100],int &distenationLength) {
	int counter = 0;
	for (short i = 0; i < totalLength; i++)
	{
		if (IsPrimeNumber(sourceArray[i])) {
			distenationArray[counter] = sourceArray[i];
			counter++;
			cout <<"Counter is Here" << counter << endl;
		}
		
	}
	distenationLength = counter;
}



void SumOfTwoArrays(sArrays &arrays) {
	
	for (short i = 0; i < arrays.totalLength; i++)
	{
	  arrays.sumArray[i] = arrays.array2[i] + arrays.array1[i];

	}
}

void ReverseArray(int array1[100], int array2[100],int length) {
	for (short i = 0; i < length; i++)
	{
		
		array2[i] = array1[length-1-i];
	}
}
void FillArrayWithRandomKeys(string array[100], int length) {
	for (short i = 0; i < length; i++)
	{
		array[i] = GnereateKeys();
	}
};
void PrintArrayWithKeys(string array[100], int length) {
	for (short i = 0; i < length; i++)
	{
		cout << "Array [" << i << "]:" << array[i] << endl;
	}
}


int GetItemIndexInIntArray(int array[100],int length,int itemToSearch) {
	for (short i = 0; i < length; i++)
	{
		if (array[i] == itemToSearch) {
			return i;
			break;
		}
		
	}
	
	return -1;
}
void PrintItemLocationInArray(int index){
	cout << "Item Location: " << index + 1 << endl;
}

bool IsItemInIntArray(int array[100], int length, int itemToSearch) {
	return GetItemIndexInIntArray(array,length,itemToSearch) > -1;
}


void FillIntArray(int array[100], int& length) {
	int stop =0;
	int index = 0;
	do
	{
		int number = ReadAnyNumber("Please Enter A Number:");
		array[index] = number;
		++index;
		stop = ReadAnyNumber("Do you want to add more numbers? [1]:Yes   [0]:No:");
		

	} while (stop!=0);
	length = index;
	cout << "Array Length:" << length << endl;
	PrintArray(length,array);
}

void AddArrayElement(int array[100], int &length,int item) {
	length++;
	array[length - 1] = item;
}
void CopyArrayWithAddArrayElement(int array[100], int length,int desArray[100],int &destLength) {
	for (short i = 0; i < length; i++)
	{
		AddArrayElement(desArray,destLength,array[i]);
	}
}

bool IsOddNumber(int number) {
	if (number % 2 != 0) {
		return true;
	}
	else
	{
		return false;
	}
}

void AddOnlyOddNumberToArray(int array[100],int length,int desArray[100],int &desLength) {
	for (short i = 0; i < length; i++)
	{
		if (IsOddNumber(array[i])) {
			AddArrayElement(desArray,desLength,array[i]);
		}
	}
}
void AddOnlyPrimeNumbersToArray(int array[100], int length, int desArray[100], int& desLength) {
	for (short i = 0; i < length; i++)
	{
		if (IsPrimeNumber(array[i])) {
			AddArrayElement(desArray, desLength, array[i]);
		}
	}
}

void AddDistictNumberToArray(int array[100], int length, int desArray[100], int& desLength) {
	
	for (short i = 0; i < length; i++)
	{
		if(!IsItemInIntArray(desArray,desLength,array[i])){
			AddArrayElement(desArray,desLength,array[i]);
		}
	}
}

bool IsArrayPalindrome(int array[100], int length) {
	for (short i = 0; i < length/2; i++)
	{
		if (!(array[i] == array[length - 1 - i])) {
			return false;
		}
	}
	return true;
}
int CountOddNumberInArray(int array[100], int length) {
	int odds = 0;
	for (short i = 0; i < length; i++)
	{
		if(IsOddNumber(array[i])) {
			odds++;
		}
	}
	return odds;
}

int CountEvenNumberInArray(int array[100], int length) {
	return length - CountOddNumberInArray(array, length);
}
void FillArrayWithRandomNumbers(int& totalLength, int array[100],int from,int to) {
	// to make this function work probably put this code in main file 
//srand((unsigned)time(NULL));
	cout << "Enter Array Length" << endl;
	cin >> totalLength;
	for (short i = 0; i < totalLength; i++)
	{
		array[i] = RandomNumber(from,to);
	}
}


int CountPostiveNumberInArray(int array[100], int length) {
	int count = 0;
	for (short i = 0; i < length; i++)
	{
		if (array[i] > 0) {
			count++;
}
	}
	return count;
}
int CountNegativeNumberInArray(int array[100], int length) {
	return length - CountPostiveNumberInArray(array,length);
}
int GetABSNumber(int number) {
	if (number > 0) {
		return number;
	}
	else
	{
		return (0 - number);
	}
}
int MyRound(float number) {
	int num = number * 10;
	int reminder = num % 10;
	if (reminder > 4) {
		return (number - (reminder/10)) + 1;
	}
	else
	{
		return (number - (reminder/10));
	}
	return number;
}
int MySquareRoot(int number) {
	for (short i = 1; i < number/2; i++)
	{
		if (number / i == i) {
			return i;
		}
	}
}