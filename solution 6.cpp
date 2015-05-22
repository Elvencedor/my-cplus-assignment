// NAME: ENO DESMOND BUFA
// MATRIC NO: 47546009IF
// DEPT: COMP. SCIENCE
// COURSE: CSC181 TUTORIAL
// writing a program to determine one's BMI status
// solution #6
# include <iostream>
int main ()
{
	using namespace std;
	//declaration of variables
	int height;
	int weight;
	int BMI;
	cout<<"Input your height:";
	cin>> height;
	cout<<"Input your weight:\n";
	cin>> weight;
	BMI=(weight/height*height);
	cout<< "BMI=";
    if(BMI>=15.0 && BMI<=24.9)
	cout<<"you are underweight";
	else 
	cout<<"you are overweight";
	
	return 0;
	
}
