#include <iostream>
using namespace std;

int main(){
int N,A,B,C;
cin>>N;
A=N/365;
cout<<A<<" years"<<endl;
B=(N-(A*365))/30;
cout<<B<<" months"<<endl;
C=N-(A*365+B*30);
cout<<C<<" days"<<endl;
}