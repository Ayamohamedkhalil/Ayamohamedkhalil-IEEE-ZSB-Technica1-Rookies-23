#include<bits/stdc++.h>
using namespace std;
int main()

{int p=5e5+5;
int fr[p];
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
fr[a[i]]++;

}
for(int i=0;i<n;i++){
 cout<<fr[i];

}

//I can not solve this problem
    return 0;
}
