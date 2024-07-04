#include <iostream>
#include <string>
using namespace std;

int length(string str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    string str;

    cout << "Enter a text to be find length: ";
    getline(cin, str);

    cout << "the length of the given string is: '" << length(str);
    return 0;
}
