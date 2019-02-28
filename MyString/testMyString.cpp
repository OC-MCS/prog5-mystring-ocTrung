// test driver code goes here
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

int main()
{
	char s1[6] =  "Billy";
	char s2[] = "Bob";

	MyString a(s1);

	cout << a << endl;

	MyString b(s2);

	b = a;

	cout << b;

	return 0;
}