#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age:";
	cin >> age;
	string num = ( age < 13 )? " child ":
		       (age >=13 && age < 20 )? " teenager " : "adult";
	cout << "Age " << age << " falls under catagory :" << num << endl;
	return 0;
}
