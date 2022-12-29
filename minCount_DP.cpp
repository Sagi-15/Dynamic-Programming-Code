#include<bits/stdc++.h>
using namespace std;
#include <climits>
int minCount(int n){
    if(n<=0){
        return 0; //edge case
    }
	int *answer=new int[n+1];
    answer[0]=0;
    answer[1]=1;
    for(int i=2;i<=n;i++){
        answer[i]=INT_MAX;
        for(int j=1;j<=floor(sqrt(n));j++){
            if(answer[n-j*j]+1<answer[i]){
                answer[i]=answer[n-j*j];
            }
        }
    }
    return answer[n];
}