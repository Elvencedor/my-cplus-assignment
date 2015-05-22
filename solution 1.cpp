// NAME:ENO DESMOND BUFA
// MATRIC NO: 47546009IF
// DEPT: COMP. SCIENCE
// COURSE: CSC 181
// solution #1
// determining if a value is even or odd

#include <iostream>
int main ()
{
using namespace std;
//variable declaration
	int value;
	cout<< "enter integer:\n";
	cin>> value;
	if (value&1==1)
	cout<< "your value is even\n";
	else 
	cout<< "your value is odd\n";//print if your value is not even
	return 0;
}
