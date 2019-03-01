#pragma once
// MyString class declaration goes here

class MyString
{
private:
	char * str;
public:
	MyString();										// default constructor
	MyString(const char* s);						// constructor that takes a char* parameter
	~MyString();									// destructor 	
	MyString(const MyString &other);				// copy constructor
	char* c_str() const;							// getter function for operator<<
	MyString operator=(const MyString &other);		// assignment operator to do a = b; returns pointer to a new cstring
	MyString operator+(const MyString &other);		// +operator to concat two strings; returns pointer to dyn alloc array for string
	bool operator==(const MyString &other);			// ==operator to compare two strings; returns true or false
};

ostream &operator << (ostream &strm, const MyString &s); //operator to output MyString