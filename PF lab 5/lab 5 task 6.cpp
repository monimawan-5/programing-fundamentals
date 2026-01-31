#include<iostream>
using namespace std;
int main()
{
	double bal,wid;
	cout<<"enter your balance $:";
	cin>> bal;
	cout<<"enter the withdrawal amount $ :";
	cin>>wid;
	if(wid<=bal)
	{bal=bal-wid;
	cout<<"Transaction successful";
	cout<<" Remaining balance :"<< bal << " $ "<<endl;
	}
	else
	{
		cout<<" insufficient balance ";
	}
	return 0;	
	
}
