#include<iostream>
using namespace std;
int main()
{
	char b;
	cout << "Enter a number between 1 to 7 select from table below :" << endl;
	cout << "1 for monday\n" "2 for tueasday\n" "3 for wednesday\n" "4 for thursday\n" 
	"5 for friday\n" "6 for saturday\n" "7 for sunday\n";
	cin >> b;
	switch (b)
	{
		case '1':
			cout << "monday";
			break;
			case '2':
			cout << "tuesday";
			break;
			case '3':
				cout << "wednesday";
				break;
				case '4':
					cout << "thursday";
					break;
					case '5':
						cout << "friday";
						break;
						case '6':
							cout << "saturday";
							break;
							case '7':
								cout << "sunday";
								break;
								default:
									cout << "you enter invalid number:" << b;
									
	}
	return 0;
}
