#include <iostream>

using namespace std;

int sum_loop(int a[],int x){
   int sum=0;
for(int i=0;i<x;i++){
 sum+=a[i];
}
return sum;
}
int sum_while_loop(int b[],int y){
int sum,i=0;
while(i<y){
    sum+=b[i];
    i++;
}
return sum;

}
int sum_rec(int m[],int z){
if(z<=0)
return 0;
return
(m[z-1]+sum_rec(m,z-1));

}

int main()
{ int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}

cout<<sum_loop(arr,n)<<endl;
cout<<sum_while_loop(arr,n)<<endl;
cout<<sum_rec(arr,n);

    return 0;
}
