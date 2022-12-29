#include <iostream>
using namespace std;

#include <climits>
int countStepsToOne(int n){
	int *answer=new int[n+1];
    answer[1]=0;
    answer[2]=1;
    answer[3]=1;
    for(int i=4;i<=n;i++){
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        x=answer[i-1];
        if(i%2==0){
            y=answer[i/2];
        }
        if(i%3==0){
            z=answer[i/3];
        }
        answer[i]=min(x,min(y,z))+1;
    }
    return answer[n];
}