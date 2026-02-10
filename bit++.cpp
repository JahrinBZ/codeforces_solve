#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count=0;
    string X;
        
    while (n>0)
    {
        cin >> X;

        if(X[1] == '+')
        {
        count++;}

        else if(X[1] == '-')
        {
        count--;
        }
        n--;
    }
    cout<< count <<endl;
}