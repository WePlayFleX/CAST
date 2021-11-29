#include <iostream>

using namespace std;

int main()
{
	int intVar = 1500000000;
	intVar = (intVar * 10) / 10;
	cout << "The value intVar is " << intVar << endl;

	intVar = 1500000000;
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "The value intVar is " << intVar << endl;

	system("pause");
	return 0;
}