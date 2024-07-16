#include <iostream>
#include <string>
using namespace std;

string upperHalf(string str)
{
    string temp;
    int len = str.length() / 2;
    for (int i = 0; i < str.length(); i++)
    {
        if (i < len)
            temp += str[i];
        else
            temp += (toupper(str[i]));
    }
    return temp;
}

int main()
{
    string str;

    cout << "Enter a text : ";
    getline(cin, str);

    cout << "the string: '" << upperHalf(str);
    return 0;
}
