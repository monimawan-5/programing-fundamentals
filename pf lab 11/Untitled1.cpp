#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num=16;
	float result, result1 , result3 , result2;
	result=sqrt(num);
	cout<< " Square root is:" << result << endl;
	result1=sin(num);
	cout << " The sin of " << num << " is :"<< result1 << endl;
	result2= power(num);
	cout << " The power of " << num << "is :"<< result2 << endl;
	result3=cos(num);
	cout << " The cos of " << num << " is :"<< result3 << endl;
	return 0;
}
