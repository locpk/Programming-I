#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[20] = "bob";
	//char s[] = { 'h', 'i', '\0', 't', 'h', 'e', 'r', 'e' };
	cout << sizeof s / sizeof(char) << endl;
	cout << strlen(s) << endl;

}

