#include<bits/stdc++.h>
using namespace std;
#include <climits>
int minCount_helper(int n,int min,int *answer){
    if(n==0){
        return 0;
    }
    if(answer[n]!=-1){
        return answer[n];
    }
    else{
        for(int i=1;i<=floor(sqrt(n));i++){
            int small_ans=minCount_helper(n-(i*i),min,answer);
            if(small_ans+1<min){
                min=small_ans+1;
            }
        }
        answer[n]=min;
        return answer[n];
    }
}
int minCount(int n){
    int *answer=new int[n+1];
    for(int i=0;i<=n;i++){
        answer[i]=-1;
    }
	return minCount_helper(n,INT_MAX,answer);
}
int main(){
    int n;
    cin>>n;
    cout<<minCount(n);
}