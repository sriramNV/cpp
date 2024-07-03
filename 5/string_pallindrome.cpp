#include <iostream>
#include <string>

using namespace std;

bool pallindrome(string str)
{
    int index1 = 0;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[index1] != str[i])
            return false;
        index1++;
    }
    return true;
}

int main()
{
    string str;

    cout << "Enter a text to be check pallindrome: ";
    getline(cin, str);

    cout << "the string: '" << str << "' is " << (pallindrome(str) ? "pallindrome" : "not pallindrome");
    return 0;
}
