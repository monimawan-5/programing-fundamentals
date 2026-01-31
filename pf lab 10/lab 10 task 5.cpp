#include<iostream>
using namespace std;
int main()
{
	int pro = 1 ,num , org;
	cout << " Enter factorial number :";
	cin >> num;
	org = num;
	for ( ; num >0; num-- )
	{
		pro = num * pro;
	}
	cout << " The factorial of "<< org << " is =" << pro;
	return 0;
}
