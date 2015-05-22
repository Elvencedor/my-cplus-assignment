// NAME: ENO DESMOND BUFA
// MATRIC NO: 47546009IF
// DEPT: COMP. SCIENCE
// COURSE: CSC181
//solution #2
// computing for the multiple of a number
# include <iostream>
main ()
{
using namespace std;
//declaring variables
int value1;
int value2;
cout<<"enter value1:\n";
cin>>value1;
cout<<"enter value2:\n";
cin>>value2;
if(value1%value2==0) //determining the multiple of a number using modulus operatorsolution 2

cout<<value1<<"is a multiple of"<< value2;
else
cout<<value1<<"is not a multiple of"<< value2;
return 0;
}
