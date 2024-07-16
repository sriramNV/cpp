#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> evenWords(string str)
{
    string large1, large2, temp;
    vector<string> list;

    for (int i = 0; i < str.length(); i++)
    {
        if (!isspace(str[i]))
            large2 += str[i];
        else // if (isspace(str[i]))
        {
            large1.clear();
            large1 = large2;
            large2.clear();
            if (large1.length() % 2 == 0)
                list.push_back(large1);
        }
    }
    return list;
}

int main()
{
    string str;
    vector<string> list;

    cout << "Enter a line: ";
    getline(cin, str);

    cout << "the words with even length in the string are: \n";
    list = evenWords(str);
    for (string i : list)
        cout << i << endl;
    return 0;
}
