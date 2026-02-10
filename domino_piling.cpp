#include<iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    if (M >= 1 && M <= N && N <= 16)
    {
    int dominoes = 2;
    int area = M*N;
    int count = 0;
    count = area/dominoes;
    cout << count;
    }
    return 0;
}