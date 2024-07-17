#include <iostream>
#include <string>
#include <algorithm>

// using namespace std;
namespace ranges = std::ranges;

char MostFreq(std::string S)
{
    int most = INT_MIN;
    char high;

    for (int i = 0; i < S.length(); i++)
    {
        auto count = ranges::count(S, S[i]);
        if (count > most)
        {
            most = count;
            high = S[i];
        }
    }
    return high;
}

int main()
{
    std::string str;

    std::cout << "Enter a text to be check pallindrome: ";
    std::getline(std::cin, str);

    std::cout << "the most frequent char is: " << MostFreq(str);
    return 0;
}
