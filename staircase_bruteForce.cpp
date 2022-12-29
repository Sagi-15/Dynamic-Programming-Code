#include<bits/stdc++.h>
using namespace std;
int staircase(int n){
    if(n<=1){
        return 1;
    }
    int x=staircase(n-1);
    int y=0,z=0;
    if(n>=2){
        y=staircase(n-2);
    }
    if(n>=3){
        z=staircase(n-3);
    }
    return x+y+z;
}
int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<staircase(n)%(1000000007)<<endl;
    }
    return 0;
}