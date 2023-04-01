#include <iostream>
#include <vector>
using namespace std;




int main()
{
	vector<int>M;
	int temp = 0;
	int lenght;
	cout << "vvedite col-vo cisel" << endl;
	cin >> lenght;
	cout << "vvedite  cisla massiva" << endl;
	    for (int i = 0; i < lenght; i++)
	    {
	        cin >> temp;
	        M.push_back(temp);
	    }
	cout << endl;
	for (int i = 0; i < M.size(); i++)
	{
		if (M[i] % 2 == 1)
			cout << M[i]*2 << " ";
	}

	return 0;
}