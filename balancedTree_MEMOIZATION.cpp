#include <iostream>
using namespace std;
int balancedBTs_helper(int n,int *answer){
    if(n<=1){
        return 1;
    }
    if(answer[n]!=-1){
        return answer[n];
    }
    else{
        int x=balancedBTs_helper(n-1,answer);
        int y=balancedBTs_helper(n-2,answer);
        answer[n]=(x*x+2*x*y);
        return answer[n];
    }
    
}
int balancedBTs(int n){
    int *answer=new int[n+1];
    for(int i=0;i<=n;i++){
        answer[i]=-1;
    }
    return balancedBTs_helper(n,answer);
}
int main(){
    int h;
    cin>>h;
    cout<<balancedBTs(h);
}