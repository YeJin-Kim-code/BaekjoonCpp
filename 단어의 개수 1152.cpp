#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;
    int size = s.length();

    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ') count += 1;
    }

    if (s[0] == ' ' && s.length() == 1) cout << 0;
    else if (s.length() == 0) cout << 0;
    else if (s[size - 1] == ' ' && s[0] == ' ') cout << count - 1;
    else if (s[size - 1] == ' ') cout << count;
    else if (s[0] == ' ') cout << count;
    else cout << count + 1;


}