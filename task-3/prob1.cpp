#include <iostream>
#include<cmath>

using namespace std;

int main()
{ int n,sum1=0,sum2=0;
cin>>n;
int arr[n][n];
for(int j=0;j<n;j++){
 for(int i=0;i<n;i++){
  cin>>arr[j] [i];
 }
}
for(int j=0;j<n;j++){
for(int i=0;i<n;i++){
  if(j==i)
sum1=sum1+arr[j][i];
 if((i + j) == (n - 1))
    sum2=sum2+arr[j][i];
}
}
cout<<abs(sum1-sum2);

    return 0;
}
