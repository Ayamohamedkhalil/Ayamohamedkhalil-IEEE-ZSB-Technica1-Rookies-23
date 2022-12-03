#include <iostream>

using namespace std;

int main()
{

int n=5;
int x[n]={5,9,8,3,2};

int t=0;
//to check number of passes
for(int i =0;i<n-1;i++){
//to compare first element with second elemnt when first element is >=second element
//makes swap and put second element in first position and still doing this untill end of the loop and end number of passes
 for(int j=0;j<n-i-1;j++){

if(x[j]>x[j+1]){
 t=x[j];
 x[j]=x[j+1];
 x[j+1]=t;
}
 }
}
//to print array
   for(int i=0;i<n;i++){
    cout<<x[i]<<" ";

   }
    return 0;
}
//Time Complexity: O(N^2)
