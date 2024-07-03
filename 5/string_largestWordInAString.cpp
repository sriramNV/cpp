#include <iostream>
#include <string>

using namespace std;

string largest(string str)
{
    string large1, large2, temp;

    for (int i = 0; i < str.length(); i++)
    {
        large2 += str[i];

        if (isspace(str[i]) || i == str.length() - 1)
        {
            if (large1.length() < large2.length())
            {
                large1.clear();
                large1 = large2;
                large2.clear();
            }
            else if (large1.length() == large2.length())
            {
                temp = large1 + " " + large2;
                large1.clear();
                large1 = large2;
                large2.clear();
            }
            else if (large1.length() > large2.length())
                large2.clear();
        }
    }
    return large1;
}

int main()
{
    string str;

    cout << "Enter a line: ";
    getline(cin, str);

    cout << "the largest work in the string: '" << largest(str) << "'";
    return 0;
}
