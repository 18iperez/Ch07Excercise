
#include <iostream>
#include <string>
using namespace std;

//made in order to recognize vowels
bool isVowel(char ch)
{
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

//The math used to "subtract" selected string
void deleteVowels(string &str)
{
    int i = 0;

    while (i < str.length())
    {
        if (isVowel(str[i]))
        {
            str = str.substr(0, i) + str.substr(i + 1);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    deleteVowels(str);

    cout << "String after changes: " << str << endl;

    return 0;
}
