#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<" enter your marks (out of 100) : ";
	cin>> m;
	if(m >= 90)
{
    cout<<" Grade : A+ " << endl;}
		
	if(m >= 80 && m <= 89 )
	{
	cout<<" Grade : A "<< endl;}
	
	if(m >= 70 && m <= 79)
	{
	cout<<" Grade : B "<< endl;}
	
	if(m >= 60 && m <= 69)
	{
	cout<<" Grade : C "<< endl;}
	if(m <= 60)
	{
	cout<< " Fail " << endl;}
	
	return 0;
}
