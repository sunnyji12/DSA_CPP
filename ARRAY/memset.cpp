
#include <cstring>
#include <iostream>
using namespace std;


int main()
{
	char str[] = "Akhilesh kumar";
	memset(str, '*', sizeof(str));
	cout << str;
	return 0;
}
