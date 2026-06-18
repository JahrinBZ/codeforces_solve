#include <iostream>
#include <iomanip>
using namespace std;

int main(){

long long A,B,C,D,Res;
cin>>A>>B>>C>>D;
Res = ((A%100) * (B%100))%100;
Res = (Res * (C%100))%100;
Res = (Res * (D%100))%100;
cout << setw(2) << setfill('0') << Res;

}
