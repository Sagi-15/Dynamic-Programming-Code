#include<bits/stdc++.h>
using namespace std;
long long staircase(long long n){
    long long *answer=new long long[n+1];
    answer[0]=1;
    answer[1]=1;
    answer[2]=2;
    answer[3]=4;
    for(int i=4;i<=n;i++){
        answer[i]=answer[i-1]+answer[i-2]+answer[i-3];
    }
    return answer[n]%(1000000007);
}
int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        cout<<staircase(n)<<endl;
    }
    return 0;
}