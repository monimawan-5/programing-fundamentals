#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << " Enter the number whose table you want :";
	cin >> number;
	for (int i=1; i<=10; i++){
		cout << i << " x " << number << " = " << i*number << endl;
	}
	return 0;
	
}
