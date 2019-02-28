// test driver code goes here
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

int main()
{
	char s1[] =  "Hello";
	char s2[] = "World";

	MyString a(s1);

	cout << a << endl;

	MyString b(s2);


	cout << "a + b: " <<  a + b << endl;


	return 0;
}