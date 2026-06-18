#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double R , Area, pi = 3.141592653;
    cin>>R;
    Area=pi*pow(R,2);
    cout << Area;
     
}
