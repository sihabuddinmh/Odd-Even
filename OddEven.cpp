#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "\n Enter the number to be tested" << endl;
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "\n The number entered is even." << endl;
	}
	else
		cout << "\n The number entered is odd." << endl;
	return 0;
}
