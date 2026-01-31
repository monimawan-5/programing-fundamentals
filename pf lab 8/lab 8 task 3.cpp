#include<iostream>
using namespace std;
int main()
{
	char c;
    cout << " Enter your choice : "
	        "\n 1 for area of circle :"
			"\n 2 for area of rectangle :"
			"\n 3 for area of triangle :" ;
			cin >> c;
			switch (c)
			{
			case '1':
			float r;
			cout << " Enter the radious of circle ";
			cin >> r;
			cout << " The area of circle is = " << r * 3.14 << endl;
			break ;
			
			
			case '2':
			int a, b ,c;
		cout << " Enter the length of rectangle :";
			cin >> a;
			cout << " Enter the width of rectangle :";
			cin >> b;
			cout << " The area of rectangle is = " << a * b << endl;
			break;
			
			case '3':
				int base, h;
				cout << " Enter the base of triangle :";
				cin >> base;
				cout << " Enter the height of triangle :";
				cin >> h;
				cout << " The area of triangle is = " << (base*h/2) ;
				break;
			default :
cout << " Invalid Choice ";
}
return 0;
}
