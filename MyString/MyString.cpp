// MyString implementation file
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

void deepCopystr(char * destinationString, char * otherString);

// default constructor
MyString::MyString()
{
	aString = nullptr;
}

// constructor that takes a char* parameter
MyString::MyString(char *str)
{
	int strSize = strlen(str) + 1; // +1 for null byte
	aString = new char[strSize];
	for (int i = 0; i < strSize; i++)
	{
		aString[i] = str[i];
	}
}

// copy constructor
MyString::MyString(const MyString &other)
{
	deepCopystr(aString, other.aString);
}

// destructor
MyString::~MyString()
{
	delete aString;
}

// getter function for operator<<
char* MyString::c_str() const
{
	return aString;
}

MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{
		int otherSize = strlen(other.aString) + 1; // +1 for null byte
		delete[] aString;
		aString = new char[otherSize];
		strcpy_s(aString, otherSize, other.aString);
	}

	return *this;
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

void deepCopystr(char * destinationString, char * other)
{
	int otherSize = strlen(other) + 1; // +1 for null byte
	destinationString = new char[otherSize];
	strcpy_s(destinationString, otherSize, other);
}