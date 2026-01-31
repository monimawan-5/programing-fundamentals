#include<iostream>
using namespace std;
int main()
{
	int t;
	cout << "enter temperature ";
	cin >> t;
	if (t >= 40 )
	{
		cout << "stay indoors temperature is dangerous for health";
	}
	else if ( t>=30 && t<=39)
	{
		cout << "drink planty of water to stay hydrated in the hot weather";
	}
	else if ( t >= 20 && t <= 29 )
	{
		cout << "weather is pleasent and suitable for outdoor activities";
	}
	else if ( t < 20 )
{
		cout << " wearing warm clothes to stay comfortable in the cooler weather";
}
return 0;
}

