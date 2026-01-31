#include<iostream>
using namespace std;
int main()
{
	int year;
	char grade;
    double basic_Salary , bonus , tax , gross_Salary , net_Salary;
	cout<<"enter you are grade ( A,a or B,b or C,c) :";
	cin>>grade;
	cout<<"enter your service year :";
	cin>> year;
	
	if (grade == 'A'|| grade == 'a')
	{
       basic_Salary = 50000;
	}
		if (grade == 'B'|| grade == 'b')
	{
       basic_Salary = 30000;
	}
		if (grade == 'C'|| grade == 'c')
	{
       basic_Salary = 20000;
	}
	if (year >= 10)
	{
		bonus = basic_Salary * 0.10;
	}
		if (year < 9 && year > 5)
	{
		bonus = basic_Salary * 0.5;
	}
		if (year < 5)
	{
		bonus = basic_Salary * 0;
	}
	gross_Salary = basic_Salary + bonus;
	if (gross_Salary > 40000)	{
		tax = gross_Salary * 0.20;
	}
		if (gross_Salary >= 30000 && gross_Salary <= 40000)	
	{
		tax = gross_Salary * 0.10;
		}
		if (gross_Salary < 30000){
		tax = 0;
	}
	net_Salary = gross_Salary-tax;
	cout<< endl << " Basic salary : "<< basic_Salary << endl;
	cout<<" Bonus : "<< bonus << endl;
	cout<<" Gross salary : "<< gross_Salary << endl;
	cout<<" Tax deducted : "<< tax<< endl;
	cout<<" Net salary : "<< net_Salary << endl;
	return 0;
}
