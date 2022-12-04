#include <iostream>

using namespace std;

int main()
{ int n;
cin>>n;
int x[n][n];
for(int rows=0;rows<n;rows++){
 for(int coloumn =0;coloumn<n;coloumn++)
    cin>>x[rows][coloumn];
}
 for(int rows=0;rows<n;rows++){
 for(int coloumn =n-1;coloumn>=0;coloumn--){
    cout <<x[coloumn][rows]<<" ";
 }
 cout<<"\n";
}
    return 0;
}
