#include <iostream>
using namespace std;
void fact ()
{
	int num;
	cout << " Enter a positive number :";
	cin >> num;
	if ( num <= 0){
		cout << " Invalid number for factoril ";
	}
	long long fact =1;
	for ( int i=1; i<=num; i++){
		fact *= i;
	}
	cout << " Factorial " << num << "! = " << fact << endl;
	
}
int main()
{ 
fact();
return 0;
}
