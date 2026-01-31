#include<iostream>
using namespace std;
int main()
{
	char sig;
	cout<< "Enter the Traffic signal colour (R,G,Y) :";
	cin>> sig;
	if(sig == 'R'|| sig == 'r')
	{
	cout<<" STOP ";}
	
	if(sig == 'Y'|| sig == 'y')
	{
	cout<<" slow down ";}
	
	if(sig == 'G'||sig == 'g')
	{
	cout<<"GO";}
	
	return 0;
}
