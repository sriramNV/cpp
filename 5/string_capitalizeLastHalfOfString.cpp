#include <iostream>
#include <string>

using namespace std;

string capitalize(string s)
{
    string temp;
    int mid = int(s.length() / 2);

    for (int i = 0; i < s.length(); i++)
    {
        if (i >= mid)
            temp += toupper(s[i]);
        else
            temp += s[i];
    }

    return temp;
}

int main()
{
    string str;

    cout << "Enter a line: ";
    getline(cin, str);

    cout << "updated removed string: '" << capitalize(str);

    return 0;
}