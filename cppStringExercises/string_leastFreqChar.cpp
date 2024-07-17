#include <iostream>
#include <string>
#include <algorithm>

// using namespace std;
namespace ranges = std::ranges;

char LeastFreq(std::string S)
{
    int least = INT_MAX;
    char low;

    for (int i = 0; i < S.length(); i++)
    {
        auto count = ranges::count(S, S[i]);
        if (count < least)
        {
            least = count;
            low = S[i];
        }
    }
    return low;
}

int main()
{
    std::string str;

    std::cout << "Enter a text to be check pallindrome: ";
    std::getline(std::cin, str);

    std::cout << "the least frequent char is: " << LeastFreq(str);
    return 0;
}
