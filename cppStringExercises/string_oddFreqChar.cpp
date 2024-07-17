#include <iostream>
#include <string>
#include <algorithm>

// using namespace std;
namespace ranges = std::ranges;

std::string OddFreq(std::string S)
{
    int least = INT_MAX;
    std::string str;
    char low;

    for (int i = 0; i < S.length(); i++)
    {
        auto count = ranges::count(S, S[i]);
        if (count % 2 != 0)
        {
            if (ranges::count(str, S[i]) > 0)
                continue;
            str += S[i];
            str += ", ";
        }
    }
    return str;
}

int main()
{
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "the least frequent char(s) is: " << OddFreq(str);
    return 0;
}
