#include <iostream>
#include <string>

using namespace std;

bool vowels(string str)
{
    bool flagA = false, flagE = false, flagI = false, flagO = false, flagU = false;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == 'A' || str[i] == 'a')
    //         flagA = true;
    //     else if (str[i] == 'E' || str[i] == 'e')
    //         flagE = true;
    //     else if (str[i] == 'I' || str[i] == 'i')
    //         flagI = true;
    //     else if (str[i] == 'O' || str[i] == 'o')
    //         flagO = true;
    //     else if (str[i] == 'U' || str[i] == 'u')
    //         flagU = true;
    // }

    if (str.contains('a') || str.contains('A'))
        flagA = true;
    if (str.contains('e') || str.contains('E'))
        flagE = true;
    if (str.contains('i') || str.contains('I'))
        flagI = true;
    if (str.contains('o') || str.contains('O'))
        flagO = true;
    if (str.contains('u') || str.contains('U'))
        flagU = true;

    return (flagA & flagE & flagI & flagO & flagU);
}

int main()
{
    string str;

    cout << "Enter a text to be check: ";
    getline(cin, str);

    cout << (vowels(str) ? "the string contains all vowles" : " the string doesnt contain all vowels");
    return 0;
}
