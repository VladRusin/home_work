#include <iostream>

using namespace std;




int main()
{
	int a;
	cout << "vvedite 1 chislo"<<endl;
	cin >> a;
	int b;
	cout << "vvedite 2 chislo"<<endl;
	cin >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	for (int i = a; i < b; i++)
	{
		if (i % 2 == 0)
			cout << i<<endl;
	}

	return 0;
}