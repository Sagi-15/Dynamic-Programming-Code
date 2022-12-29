#include<bits/stdc++.h>
using namespace std;

int staircase_helper(int n,int *answer){
    if(n<=1){
        return 1;
    }
    if(answer[n]!=-1){
        return answer[n];
    }
    else if(answer[n]==-1){
        int x=staircase_helper(n-1,answer);
        int y=0,z=0;
        if(n>=2){
            y=staircase_helper(n-2,answer);
        }
        if(n>=3){
            z=staircase_helper(n-3,answer);
        }
        answer[n]=x+y+z;
        return answer[n];
    }
}

int staircase(int n){
    int* answer=new int[n+1];
    for(int i=0;i<=n;i++){
        answer[i]=-1;
    }
    return staircase_helper(n,answer);
}
int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        //cout<<staircase(n)%(1000000007)<<endl;
        cout<<pow(10,9)+7<<endl;
    }
    return 0;
}