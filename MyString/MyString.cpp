// MyString implementation file
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

void deepCopystr(char * &destinationString, char * otherString);

// default constructor
MyString::MyString()
{
	str = nullptr;
}

// constructor that takes a char* parameter
MyString::MyString(const char* s)
{
	int strSize = strlen(s) + 1; // +1 for null byte
	str = new char[strSize];
	strcpy_s(str, strSize, s);
}       

// copy constructor
MyString::MyString(const MyString &other)
{
	deepCopystr(str, other.str);
}

// destructor
MyString::~MyString()
{
	delete[] str;
}

// assignment operator to do a = b
// returns pointer to a new cstring
MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{
		delete[] str;
		deepCopystr(str, other.str);
	}

	return *this;
}

// returns pointer to dyn alloc array for string
MyString MyString::operator+(const MyString &other)
{
	int size = strlen(str) + strlen(other.str) + 2; // 1 for null byte, 1 for space char

	// create a copy of s1
	char *strcopy;
	strcopy = new char[size];
	strcpy_s(strcopy, size, str);

	// concat a space on s1copy
	strcat_s(strcopy, size, " ");
	// concat s2 on s1copy
	strcat_s(strcopy, size, other.str);

	// return s1copy
	return strcopy;
}

bool MyString::operator==(const MyString &other)
{
	bool isEqual = false;
	if (strcmp(str, other.str) == 0)
	{
		isEqual = true;
	}
	return isEqual;
}

// getter function for operator<<
char* MyString::c_str() const
{
	return str;
}

/*========================================
Non member functions
========================================*/
//operator to output MyString
ostream &operator << (ostream &strm, const MyString &s)
{
	strm << s.c_str();
	return strm;
}

void deepCopystr(char * &destinationString, char * other)
{
	int otherSize = strlen(other) + 1; // +1 for null byte
	destinationString = new char[otherSize];
	strcpy_s(destinationString, otherSize, other);
}