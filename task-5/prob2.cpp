#include <iostream>

using namespace std;

int main()
{ bool b=false;
    string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='('&& s[i+1]==')')
    {
        b=true;
    }
    if(s[i]=='{'&&s[i+1]=='}')
        {
            b=true;
        }
    if(s[i]=='['&&s[i+1]==']')
    {
        b=true;
    }

}
if(b==true)
    cout<<"True";
else
    cout<<"False";

    return 0;
}
