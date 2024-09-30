#include <iostream>

using namespace std;

int find(const string &str, const char &c)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int find(const string &str, const string &search)
{
    int searchSize = search.size();
    for (int i = 0; i <= (str.size() - searchSize); i++)
    {
        int index = 0;
        while (str[i+index] == search[index] && index < searchSize)
        {
            index++;
        }
        if (index == searchSize)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << find("String",'z') << endl;
    cout << find("String","ing") << endl;
    cout << find("The quick brown fox",'e') << endl;
    cout << find("The quick brown fox", "e") << endl;
    cout << find("The quick brown fox", ' ') << endl;
    cout << find("The quick brown fox", "quiet") << endl;
    cout << find("The quick brown fox", "quick") << endl;
    cout << find("The quick brown fox", "") << endl;
    return 0;
}