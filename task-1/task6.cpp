#include <iostream>

using namespace std;

int main()
{
int x,y,GCD;
cin>>x>>y;

for(int  i=1;i<=x;i++){
    if(x%i==0 && y%i==0)
 GCD=i;
}
cout<<GCD;
    return 0;
}
