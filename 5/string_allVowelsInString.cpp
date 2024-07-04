#include <iostream>
#include <string>

bool vowels(std::string str)
{
    bool flagA = false, flagE = false, flagI = false, flagO = false, flagU = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
            flagA = true;
        else if (str[i] == 'E' || str[i] == 'e')
            flagE = true;
        else if (str[i] == 'I' || str[i] == 'i')
            flagI = true;
        else if (str[i] == 'O' || str[i] == 'o')
            flagO = true;
        else if (str[i] == 'U' || str[i] == 'u')
            flagU = true;
    }
    return (flagA & flagE & flagI & flagO & flagU);
}

int main()
{
    std::string str;

    std::cout << "Enter a text to be check pallindrome: ";
    std::getline(std::cin, str);

    std::cout << (vowels(str) ? "the string contains all vowles" : " the string doesnt contain all vowels");
    return 0;
}
