#include <iostream>
#include <string>

using namespace std;

string removeChar(char a, string s)
{
    string temp;
    int idx = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != a)
        {
            temp += s[i];
                }
        else
            continue;
    }

    return temp;
}

int main()
{
    string str;
    char a;

    cout << "Enter a text: ";
    getline(cin, str);

    cout << "\n Enter the char to be removed: ";
    cin >> a;

    cout << "Updated string: " << removeChar(a, str);
    return 0;
}