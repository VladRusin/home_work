#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> separate(string str, vector <string>& stroca)
{
    string new_str;
    for (int i = str.size(); i > 0; i--)
    {
        new_str.push_back(str[i]);
    }
    stroca.push_back(new_str);
    return stroca;
}

int main()
{
    vector <string> stroca;
    string str;
    cout << "vvedite strocu" << endl;
    getline(cin, str);
    separate(str, stroca);
    for (int i = 0; i < stroca.size(); i++)
    {
        cout << stroca[i];
    }
    return 0;
}