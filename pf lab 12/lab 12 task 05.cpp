#include <iostream>
using namespace std;
// function for addition
void add(){
	int num1, num2, sum;
	cout << " Enter first integer : ";
	cin >> num1;
	cout << " Enter Second integer : ";
	cin >> num2;
	sum = num1 + num2;
	cout << " The Sum of two inger is = " << sum << endl;
}
// function for substraction
void sub(){
	int num1 ,num2, sub;
	cout << " Enter first integer : ";
	cin >> num1;
	cout << "Enter Second integer : ";
	cin >> num2;
	sub = num1 - num2;
	cout << " The Substraction of two integer is = "<< sub << endl;
	
}
// function for multiplication
void mul(){
		int num1 ,num2, mul;
	cout << " Enter first integer : ";
	cin >> num1;
	cout << "Enter Second integer : ";
	cin >> num2;
	mul = num1 * num2;
	cout << " The multiplication of two integer is = " << mul << endl; 
}
// function for division

void div(){
	int num1, num2;
	float div;
	cout << " Enter first integer : ";
	cin >> num1;
	cout << "Enter Second integer : ";
	cin >> num2;
	div = num1/num2;
	cout << " The division of two integer is : " << div << endl;
	
}
int main()
{
	int choice;
	cout << "===== MENU=====" << endl;
	cout << " 1. for addition" << endl;
	cout << " 2. for substraction"<< endl;
	cout << " 3. for multiplication" << endl;
	cout << " 4. for division" << endl;
	cout << " 5. for Exit" << endl;
	cout << endl << " Enter your choice :";
	cin >> choice;
	switch (choice){
		case 1:
			add();
			break;
		
		case 2:
			sub ();
			break;
		
		case 3:
			mul();
			break;
		
		case 4:
			div();
			break;
		
		case 5:
			cout << " Exit program "<< endl;
			break;
			default:
			
				cout << " Invalid Number ";
				break;
		}
		return 0;
}

