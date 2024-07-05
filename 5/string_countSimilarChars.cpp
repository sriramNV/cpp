#include <iostream>
#include <string>
using namespace std;

int compare(string str1, string str2)
{
    int count = 0;
    string list;

    for (int i = 0; i < str1.length(); i++)
        if (str2.contains(str1[i]) && (!(list.find(str1[i]) > 0)))
        {
            count++;
            list += str1[i];
            cout << "list: " << list << " ";
        }
        else
            continue;
    return count;
}

int main()
{
    string str1, str2;

    cout << "\nEnter first string: ";
    getline(cin, str1);

    cout << "\nEnter second string: ";
    getline(cin, str2);

    cout << "the string: '" << compare(str1, str2);
    return 0;
}
