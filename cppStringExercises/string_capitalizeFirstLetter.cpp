#include <iostream>
#include <string>

using namespace std;

string capitalize(string s)
{
    string temp;
    if (islower(s[0]))
        temp += toupper(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (!isspace(s[i - 1]))
            temp += s[i];
        else
            temp += toupper(s[i]);
    }

    return temp;
}

int main()
{
    string str;

    cout << "Enter a line: ";
    getline(cin, str);

    cout << "space removed string: '" << capitalize(str);

    return 0;
}