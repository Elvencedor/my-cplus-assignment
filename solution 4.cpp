// NAME: ENO DESMOND BUFA
// MATRIC NO: 47546009IF
// DEPT: COMP. SCIENCE
// COURSE: CSC 181 TUTORIALS
// SOLUTION#4
# include <iostream>
int main()
{
using namespace std;
//variables declaration
	int fivedigit;
	int a, b, c, d, e;
	// a, b, c, d, e represent digits of fivedigit number
	// a is the first digit
	// b is the second digit
	// c is the third digit
	// d is the fourth digit &
	// e is the fifth digit
	cout<<"please enter the five digit integer:\n";//INPUT VARIABLES CONTAINING FIVE DIGITS
	cin>>fivedigit;
	if (fivedigit<10000)
	{
	cout<<"incorrect digit!try another number";
	}
	if(fivedigit>99999)
	{cout<<"incorrectdigit! try another number"; 
	}
	a=fivedigit/10000;
	b=(fivedigit/10000)%10;
	c=(fivedigit/1000)%10;
	d=(fivedigit/100)%10;
	e=(fivedigit/10)%10;
	cout<<a;
	cout<<"   "<<b;
	cout<<"   "<<c;
	cout<<"   "<<d;
	cout<<"   "<<e;
	return 0;
}
