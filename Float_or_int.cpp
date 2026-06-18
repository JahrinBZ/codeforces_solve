#include <iostream>
using namespace std;

int main(){

long double N;
cin >> N;
int num = (int) (N);

if (num == N)
cout << "int " << num;
else if(num != N)
cout << "float " << num << " " << (N-num);

}
