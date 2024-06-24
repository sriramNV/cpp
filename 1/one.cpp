#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"hello", "C++", "World", "from", "VS code"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
}