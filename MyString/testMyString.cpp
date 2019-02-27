// test driver code goes here
#include <iostream>	
#include <cstring>
using namespace std;

#include "MyString.h"

int main()
{
	char acstring[6] =  "Billy";

	MyString a(acstring);

	cout << a; 

	return 0;
}