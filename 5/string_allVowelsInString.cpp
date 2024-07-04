#include <iostream>
#include <string>

bool vowels(std::string str)
{
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < str.length(); i++)
    {
        if (str.std::string::contains(vowel[i]))
        {

            std::cout << "\nvowle: " << str[i] << std::endl;
            continue;
        }

        else
            return false;
    }
    return true;
}

int main()
{
    std::string str;

    std::cout << "Enter a text to be check pallindrome: ";
    std::getline(std::cin, str);

    std::cout << (vowels(str) ? "the string contains all vowles" : " the string doesnt contain all vowels");
    return 0;
}
