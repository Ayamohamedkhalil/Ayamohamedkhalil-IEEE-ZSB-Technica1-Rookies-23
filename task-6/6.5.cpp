#include <iostream>

using namespace std;
bool isSubSequence(string s1, string s2)
{
    int s_s1 = s1.length(), s_s2 = s2.length();
    int i = 0, j = 0;
    while (i < s_s1 && j < s_s2) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if(i == s_s1)
    return true;
    else
    return false;
}
int main()
{

    int x;
    cin>>x;
    string a="hackerrank";
    string b;
    for(int i=0;i<x;++i)
    {
    cin>>b;
    if(isSubSequence(a,b)==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
