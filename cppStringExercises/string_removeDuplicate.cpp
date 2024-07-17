#include <iostream>
#include <string>
using namespace std;

string RemoveChar(char a, string s)
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

string Duplicates(string s)
{
    bool duplicate = false;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length() - 1; j++)
        {
            if (s[i] == s[j])
            {
                duplicate = true;
                s = RemoveChar(s[j], s);
            }
        }
    }
    return s;
}

int main()
{
    string str;

    cout << "Enter a text to be check pallindrome: ";
    getline(cin, str);

    cout << "the string: '" << str;
    cout << "\n dup removed string: " << Duplicates(str);
    return 0;
}
