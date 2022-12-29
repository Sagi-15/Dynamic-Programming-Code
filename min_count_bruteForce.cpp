#include<bits/stdc++.h>
using namespace std;
#include <climits>
int minCount_helper(int n,int min){
    if(n==0){
        return 0;
    }
    for(int i=1;i<=floor(sqrt(n));i++){
        int small_ans=minCount_helper(n-(i*i),min);
        if(small_ans+1<min){
            min=small_ans+1;
        }
    }
    return min;
}
int minCount(int n){
	return minCount_helper(n,INT_MAX);
}
int main(){
    int n;
    cin>>n;
    cout<<minCount(n);
}