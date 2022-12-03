#include <iostream>

using namespace std;

int main()
{ string s="hello",s1;
cin>>s1;
 int x=0 ;
for(int i=0;i<s1.size();i++){

  if(s[x]==s1[i]){
  x++;
  }
}
if(x==5)
cout<<"yes";
else
    cout<<"NO";




    return 0;
}
