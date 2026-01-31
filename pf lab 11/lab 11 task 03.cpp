#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int arr[3];
	for (int i=0; i<3; i++){
		cout << "Enter the number for Sum " << i+1 << " :";
		cin >> arr[i];
	}
	for ( int i=0; i<3; i++)
	{
	sum +=arr[i];
}
cout << "The Sum of array is =" << sum << endl;

	return 0;
}
