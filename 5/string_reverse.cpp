#include <iostream>
#include <string>

using namespace std;

string reverse(string str)
{
    string str_temp = str;
    int index = 0;

    for (int x = str_temp.length() - 1; x >= 0; x--)
    {
        str_temp[index] = str[x];
        index++;
    }

    return str_temp;
}

int main()
{
    string str;

    cout << "Enter a text to be reversed: ";
    getline(cin, str);

    cout << "Reversed string: " << reverse(str);
    return 0;
}