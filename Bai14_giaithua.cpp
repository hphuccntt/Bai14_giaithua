#include <iostream>
using namespace std;
int main()
{
	cout << "tinh giai thua" << endl;
	int so, giaithua = 1;
	cout << "nhap so: "; cin >> so;
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "! =" << giaithua;

	return 0;
}