#include <iostream>

using namespace std;
int reversed(int n){
  int reversed_number = 0, remainder;


  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }


  return  reversed_number;
}

int main()
{
int x,y;
cin>>x;
y=reversed(x);
if(y==x)
cout<<y<<endl<<"YES";
else
cout<<y<<endl<<"NO";
    return 0;
}
