#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string weight;
    vector<string> msg {"Hello", "world!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cin >> weight;
    cout << weight;
}