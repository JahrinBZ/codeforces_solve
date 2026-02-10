#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s,s1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(i%2 == 0)
        {
            s1 += s[i];
        }
    }
        
        sort(s1.begin(), s1.end());
        for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i];
        if(i < s1.length() - 1)
        {
            cout << '+';
        }
    }
    return 0;
}



 