#pragma once
// MyString class declaration goes here

class MyString
{
private:
	char * str;
public:
	MyString();
	MyString(const char* s);
	~MyString();
	MyString(const MyString &other); // copy constructor
	char* c_str() const; // getter function for operator<<
	MyString operator=(const MyString &other);
	MyString operator+(const MyString &other);
	bool operator==(const MyString &other);
};

ostream &operator << (ostream &strm, const MyString &s);
