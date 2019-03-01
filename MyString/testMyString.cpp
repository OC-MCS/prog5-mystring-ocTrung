//============================================================
// Trung Nguyenvo
// due: 2.29.19
// Programming Assignment #5
// Description: String Class
//============================================================
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

/*===================================
name: testMyStringFunc
function: assigns a cstring to the argument
parameters: MyString that should not be changed 
return: returns a MyString
=====================================*/
MyString testMyStringFunc(MyString s)
{
	char a[] = "Not hello";
	s = a;
	cout << "This is MyString s after passing by value to a function: " << s << endl;
	return s;
}

int main()
{
	// Testing all constructors 
	MyString s1;
	MyString s2("hello");
	MyString s3(s2);
	char a[] = "hello";
	MyString s4(a);

	cout << "Test: s2 should be 'hello'. s2: " << s2 << endl;
	cout << "Test: s3 should be 'hello'. s3: " << s3 << endl;
	cout << "Test: s4 should be 'hello'. s4: " << s4 << endl;
	cout << endl;

	// Passing a MyString by value to a function
	// Returning a MyString from a function
	s1 = testMyStringFunc(s2);
	cout << "Original s2 should still be 'hello'. s2: " << s2 << endl;
	cout << endl;
	cout << "Test: returning a MyString from a function." << endl;
	cout << "Test: s1 should be 'not hello'. s1: " << s1 << endl;
	cout << endl;

	// testing operator=
	cout << "before: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s2 = s1;
	cout << "after s2 = s1, s2: " << s2 << endl << endl;
	
	cout << "before: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	s3 = s2 = s1;
	cout << "after s3 = s2 = s1" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl << endl;

	cout << "before: " << endl;
	cout << "s1: " << s1 << endl;
	s1 = "jimmy";
	cout << "after s1 = 'jimmy': " << endl;
	cout << "s1: " << s1 << endl << endl;

	s1 = s1;
	cout << "s1 = s1 " << endl;
	cout << "s1: " << s1 << endl << endl;

	// testing the + operator
	s1 = "hello";
	s2 = "world";
	cout << "Before +operator" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s3 = s1 + s2;
	cout << "After +operator" << endl;
	cout << "s3: " << s3 << endl << endl;

	// testing the == operator
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	if (s1 == s2)
	{
		cout << "s1 == s2" << endl;
	}
	else
	{
		cout << "s1 != s2" << endl;

	}
	cout << endl;

	s1 = "hello";
	s2 = "hello";
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	if (s1 == s2)
	{
		cout << "s1 == s2" << endl;
	}
	else
	{
		cout << "s1 != s2" << endl;

	}
	cout << endl;

	return 0;
}
