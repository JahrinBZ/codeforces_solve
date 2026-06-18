#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n > 0)
    {
        string s;
        cin >> s;
        if(s.length() > 10)
        {
            cout << s.front() << s.length() - 2 << s.back() << endl;
        }
        else
        {
        cout << s << endl;
        }

        n--;
    }
}
