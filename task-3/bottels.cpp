#include<iostream>
using namespace std;
struct bottels{
    int vol;
    int cap;
};
int main(){
    int num,flag=0;
    cin>>num;
    struct bottels bot[num];
    for(int i = 0 ; i < num ; i++){
        cin>>bot[i].vol>>bot[i].cap;
    }
    long long voll = 0;
    for(int i = 0 ; i < num ; i++){
        voll += bot[i].vol;
    }
    for(int i = 0 ; i<num-1 ; i++){
        for(int x = 1 ; x < num ; x++){
            if((bot[i].cap + bot[x].cap) >= voll){
                flag = 1;
            }
        }
    }
    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
