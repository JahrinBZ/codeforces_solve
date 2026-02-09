#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;
    while(n>0)
    {
        int q[3];
        for(int i=0; i<3; i++)
        {
            cin >> q[i];
        }
        if (q[0]&&q[1]==1 || q[1]&&q[2]==1 || q[0]&&q[2]==1)
        {
            count++;
        }
        n--;
    }
    cout << count << endl;
    return 0;
}
