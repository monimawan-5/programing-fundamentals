#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout << "enter your salary :$ ";
	cin >>salary;
	if ( salary >= 25000){
		cout << " eligible for loan";
		return 0;
	}
	int experience;
	cout << "enter your experience :";
	cin >> experience;
	if (salary >= 20000 && experience > 5) {
		cout << "eligible for loan";
		}
		else 
		cout << "not eligible ";
	return 0;
}
