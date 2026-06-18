#include <iostream>
using namespace std;

int main(){

    char X;
    cin >> X;
    int num = (int) X; 
    
    if(num >= 48 && num <= 57)
    cout << "IS DIGIT";
    else if (X >= 65 && X <= 90) 
    {
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL" ;
    }
    else if (X >= 97 && X <= 122)
    {
    cout << "ALPHA" << endl;
    cout << "IS SMALL" ;
    }
}
