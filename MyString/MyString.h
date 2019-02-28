#pragma once
// MyString class declaration goes here

class MyString
{
private:
	char * aString;

public:
	MyString();
	MyString(char *str);
	MyString(const MyString &other);
	~MyString();
	char* c_str() const; // getter function for operator<<
	MyString operator=(const MyString &other);
};

ostream &operator << (ostream &strm, const MyString &s);
