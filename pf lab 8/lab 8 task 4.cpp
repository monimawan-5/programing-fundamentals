#include<iostream>
using namespace std;
int main()
{
	int USD;
	cout << " Enter your amount in dollar :";
    cin >> USD;
    int currency;
    cout << " Select The currency in which you want to convert "
    		" \n 1 FOR INR : "
    		" \n 2 FOR PKR : "
    		" \n 3 FOR Euros : ";
    cin >> currency;
    switch (currency)
    {
	case 1:
    	cout << " The amount in INR is : " <<  83 * USD << endl;
    	break;
    	
    	case 2:
    	cout << " The amount in PKR is : " << ( 280 * USD );
    	break;
    	
    	case 3:
    	cout << " The amount in Euros is :" << ( 0.92 * USD );
    	break;
    	
    	default:
        cout << " Invalid choice ";
    }
    return 0;
    }
    	
