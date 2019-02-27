// MyString implementation file
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

void deepCopystr(char * destinationString, char * otherString);


// default constructor
MyString::MyString()
{
	aString = new char;
	*aString = 0;
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

// getter function for operator<<
char* MyString::c_str() const
{
	return aString;
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

void deepCopystr(char * destinationString, char * otherString)
{
	int otherSize = strlen(otherString) + 1; // +1 for null byte
	destinationString = new char[otherSize];
	strcpy_s(destinationString, otherSize, otherString);
}


