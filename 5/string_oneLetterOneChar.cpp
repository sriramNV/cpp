#include <iostream>
#include <string>
using namespace std;

bool validate(string str)
{
    bool num = false;
    bool chr = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
            chr = true;
        else if (isdigit(str[i]))
            num = true;
    }
    if (chr == true && num == true)
        return true;
    else
        return false;
}

int main()
{
    string str;

    cout << "Enter a text to be check : ";
    getline(cin, str);

    cout << "the string: '" << (validate(str) ? "Valid string" : "Invalid String") << "'";
    return 0;
}
