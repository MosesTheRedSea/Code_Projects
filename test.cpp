#include <iostream>
//#include <format>
#include <string>
//#include <string_view>
#include <cmath>
#include <vector>
#include <typeinfo>
using namespace std;
#define user_name "Moses Adewolu" // Constant - Value Cannot be Changed

/*
				August 5 2023

█▀▄▀█ █▀▀█ █▀▀ █▀▀ █▀▀ ─█▀▀█ █▀▀▄ █▀▀ █───█ █▀▀█ █── █──█ 
█░█░█ █──█ ▀▀█ █▀▀ ▀▀█ ░█▄▄█ █──█ █▀▀ █▄█▄█ █──█ █── █──█ 
█──░█ ▀▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀ ░█─░█ ▀▀▀─ ▀▀▀ ─▀─▀─ ▀▀▀▀ ▀▀▀ ─▀▀▀

*/

/*
    // Data Types
 	int x = 5;
 	double y = 5.0; 64 Bits
 	string name = "Moses";
 	bool safe = false; // True or False
 	unsigned char z = 129; // characters 8 Bits // Represents values 0 & up

 	// char by default - 128 is the highest number
 	// unsigned char is 255 highest number
 	float w; // Fractional numbers
 	// Sky is the limit when it comes to structs and classes
 	// strings are groups oc characters
 	
  	// 17 integral data types
 	short a;
 	int b; // At least 16 bits
 	long c; // At least 32 bits
 	long long d; // At least 64 bits

 	// short <= int <= long <= long long
 	unsigned short aa;
 	unsigned int bb;
 	unsigned long cc;
 	unsigned long long dd;
	
 	unsinged is positive values
 	signed is positive and negative as well as 0
 	cout << ULLONG_MAX << endl; // size returns the value in bytes 2 bytes is 16 bits
 	cout << SHRT_MAX << endl; - Positive
 	cout << SHRT_MIN << endl; - Negative
 	cout << USHRT_MAX << endl;
	
 	// Keyword std:boolalpha 
	bool found = false;
	cout << std::boolalpha << found << std::endl;
	// Flag is something that indicates something
	
	// Floating Point Decimals
	// Float - Double - Long Double -> Go with double they can hold huge values 
	
	double a = 10.0 / 3;
	a = a * 1000000000000;
	double b; // Double are a bit more trustworthy when we get to digits
	long double c;
	
	// 7.7 * 10000 = 77000
	cout << std::fixed << a << endl;
	cout << LDBL_DIG << endl;
	
	// 3 Types of constances
	// const, enum, #define
	#define X 10
	const x = 10;
	enum {y = 100} // Cannot change Value
	
	// nan Not a Number
	// int
	
	remainder()
	abs() -- absolute value 
	fmod() -- Similir to the remainder
	pow() -- Number raised to a power
	sqrt() -- SquareRoot of a Value
	fmax() -- Maximum Values
	fmin() -- Minimum Values
	ceil() -- Rounds Up
	floor() -- Rounds Down
	trunc() -- Crops off value
	round() -- rounds what is closest
	
	User Input For Strings
	C++ Cin only takes the first value for stribngs
	string greeting;
	getLine(cin, greeting);
	cout << greeting << endl;
	or 
	cin.getLine()

	.append()
	.insert()
	.erase()
	.pop_back()
	.replace(strart, length, whatToReplace)
	.find()
	.substr()
	.find_first_of() -- Similiar to .index() in python -- Finds the First
	.compare()

	to_string() -- Convert a value to a stirng in C++
	string greeting = "What the hell?";
	greeting.replace(greeting.find("hell"), 4, "****");
	cout << greeting << endl;
	//npos == -1 -- Used for Testing Using If Statments
	cout << greeting.compare("What is up?") << endl; // Returns 0 If Both Strings are Equal 
	// In C++ == Compares the Values In Java == Compares
	// String Modifier Methods
	 string name = "Moses";     
    cout << name.length() << endl;
    name.replace(0, 5, "Heaven");
    cout << name << endl;
    name.pop_back();
    cout << name << endl;
    name.append("There!");
    name.insert(3, "");
    name.erase(3, name.length()-1);
    cout << name << endl;
   	// String Operators
	// Literals
	 	auto x = 5.0L;
	 	auto b = 5ULL;
	 // OCT & hexidecimal

	  // Hexidecimal 0 - 15
	 // A- 10 / B - 11 / C - 12 / D - 13 / E - 14 / F - 15
    // Decimal
   // Octal 0 -7

   int number = 30; // twenty four
   cout << oct << number << endl;
   cout << hex << number << endl;
*/

// Clear the Array
void circlePower(int one, int two) {
	cout << one * two << endl;
}

// Exchange values within the Array
void valueSquared(int a) {
	cout << pow(abs(a), 2) << endl;
}

int howManySeconds(int b) {
	cout << b * 3600 << endl;
}

// Bianry-Seach-Algorithim
int binarySearch(int arr[], int valueToFind)  // O log(n)
{
	int l, h;	
	l = 0;
	h = sizeof(arr) / sizeof(arr[0]);
	
	while (l >= h) {
		int mid = (h + l) / 2; 

		if (arr[mid] == valueToFind) {
			return mid
		} else if (arr[mid] < valueToFind) {
			l = mid + 1;
		} else {
			h = mid - 1
		}
	}
	return -1
}

double calculateDailyWaterNeeds() {
}

string updateValuesOfString(string given) {
	string finalString;
	for (int i = 0; i < given.length(); ++i) {
	}

	return finalString;
}

int selection_Sort(int arr[]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i) {
	}
}

/**
int findNumberOfLIS(vector<int> nums) {
	int counter;
	bool isAscend;
    for (int i = 0; i < nums; ++i) {
        vector<int> holder;
       	for (int k = 0; k < num; ++k) {    
        	holder.push_back(nums[k]);
        	// Check to See if Vector is In Ascending Order
            for (int a = 0; a < holder.size()-1; ++a) {
            	if (holder[a] < holder[a+1]) {
            		continue
            	} else {
            		if (holder.size() > 1) {
            			counter++;
            		}
            		break;
            	}
            }
       		counter++; 
     	}
    }
}
**/

int main () {

	int b = 6;
	//cout << 6.0 / 2.0 << endl;
	//circlePower(230, 10);
	//valueSquared(-5);
	string name1 = "Moses";
	name1.append(" Adewolu");

	/*

		cout << name << endl;
		
		string userName;
		cout << "What is your name" << endl;
		cin >> userName;

		cout << userName << endl;
	
		//string value;
		//getline(cin, value);
		//int x = value.find_first_of(" ");
		//string num1 = value.substr(0, x);
		//string num2 = value.substr(x+1, value.length());
	
		//int total = stoi(num1) + stoi(num2);

		//cout << total << endl;
		//howManySeconds(2);
	*/

	/*
		enum class Season {summer, spring, fall, winter};

		Season now = Season::spring;

		switch(now)
		{
		case Season::summer:
			cout << "It's Summer Time" << endl;
			break;

		case Season::spring:
			cout << "It's Spring Time" << endl;
			break;

		case Season::fall:
			cout << "It's Fall Time" << endl;
			break;

		case Season::winter:
			cout << "It's Winter Time" << endl;
			break;
		}
	*/

	//Ternary Operator 

	/*
		int guess;
		int answer = 11;
		cin >> guess;
		int points = guess == answer ? 10 : 0;
		cout << points << endl;
	*/

	// Intro To Arrays & Vectors - Templatized Array

	// Arrays
	int guesses1[10];

	// Index - Each Element ahs an Index

	// Where in the Array is that Index

	int random_Nums[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29}; 

	//binarySearch(random_Nums, 9);

	//cout << sizeof(random_Nums) / sizeof(random_Nums[0]) << endl;
	
	int num_Length = sizeof(random_Nums)/sizeof(random_Nums[0]); // Calculate the Length of 

	for (int m = 0; m < num_Length; ++m) {

		cout << random_Nums[m] << endl;

	}

	//binarySearch(random_Nums, 17);

	// Vectors

	vector<int> num_Values;	

	// Templatized Array

	// Dynamic Programming	

	int n = 7;

	int k = 3;

	int arr[] = {4, 8, -3, -6, -10, 20, -1};

	cout << binarySearch(arr, 20) << endl;

	string name;
	string lastName;

	cout << "Etner your First Name" << endl;
	getline(cin, name);

	cout << "Users name is " << name << endl;
	cout << name.substr(3, name.length()) << endl;

	cout << "Enter your Last Name" << endl;
	getline(cin, lastName);
	name.append(" " + lastName);
	cout << name << endl;
	double x = 5 / 2.0;	

	//cout << x << endl;

	//cout << ceil(x) << endl;

	//cout << floor(x) << endl;

  /*
	string words = "w3resource";
	char holder = 'a';
	int holder2 = int(holder) + 1;
	holder = holder2;
	cout << holder << endl;
	string finalValue;

	for (int i = 0; i < words.length(); ++i)
	{
		if ((int)words[i] ) {
			cout << "value is an Int" << endl;
		} else {
			cout << words[i] << endl;
			cout << typeid(words[i]).name() << endl;
		}
	}
  */
	
	//Arrays in C++ are staticly sized - WHen you set 7 as the size of the array that is the max

	int guesses[7]; // Size of Guesses is 7

	// Vector's in other programs are ArrayList

	vector<int> num_Guesses;

	for (int i = 0; i < 11; ++i) {
		num_Guesses.push_back(i);
	}

	//Printing Out Values in a Vector C++	
	cout << "Output the Entire Vector Num_Guesses" << endl;
	for (auto k = num_Guesses.begin(); k != num_Guesses.end(); ++k) {
		cout << *k << " ";
	}

	//cout << format("Moses' favorite Food is the {	}","	Asian BBQ Steak Rice Bowl	" );
  	return 0;
}




