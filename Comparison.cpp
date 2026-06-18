#include <iostream>
using namespace std;
 
int main(){
 
long long A,B;
char S;
cin >> A >> S >> B;
 
if (S == '>')
{
    if (A>B)
    cout << "Right";
    else
    cout << "Wrong"; 
}
else if(S == '<')
{
    if (A<B)
    cout << "Right";
    else
    cout << "Wrong";
}
else if(S == '=')
{
    if (A==B)
    cout << "Right";
    else
    cout << "Wrong";
}
 
}