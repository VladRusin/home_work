#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& M)
{

    int c;
    for (int i = 0; i < M.size(); i++)
    {
        int min = M[i];
        int pos = i;
        for (int j = i; j < M.size(); j++)
        {
            if (M[j] < min)
            {
                min = M[j];
                pos = j;
            }
        }
        c = M[i];
        M[i] = min;
        M[pos] = c;   
    }
}

int main()
{
    vector<int>M;
    int temp = 0;
    int lenght = 0;
    cout << "vvedite col-vo cisel massiva" << endl;
    cin >> lenght;
    cout << "vvedite  cisla massiva" << endl;
    for (int i = 0; i < lenght; i++)
    {
        cin >> temp;
        M.push_back(temp);
    }
    sort(M);
    for (int i = 0; i <M.size(); i++)
    {
        cout << M[i] << " ";
    }
    return 0;
}