#include <iostream>
using namespace std;

#include <climits>

int countStepsToOne_helper(int n,int *answer){
    if(n==1){
        return 0;
    }
    int n_minus_1_to_1=INT_MAX,n_by_2_to_1=INT_MAX,n_by_3_to_1=INT_MAX;
    if(answer[n-1]!=-1){
        n_minus_1_to_1=answer[n-1];
    }
    else if(answer[n-1]==-1){
        n_minus_1_to_1=countStepsToOne_helper(n-1,answer);
    }
    if(n%2==0){
        if(answer[n/2]!=-1){
            n_by_2_to_1=answer[n/2];
        }
        else if(answer[n/2]==-1){
            n_by_2_to_1=countStepsToOne_helper(n/2,answer);
        }
    }
    if(n%3==0){
        if(answer[n/3]!=-1){
            n_by_2_to_1=answer[n/3];
        }
        else if(answer[n/3]==-1){
            n_by_2_to_1=countStepsToOne_helper(n/3,answer);
        }
    }
    answer[n]=min(n_minus_1_to_1,min(n_by_2_to_1,n_by_3_to_1))+1;
    return answer[n];
}

int countStepsToOne(int n){
	int *answer=new int[n+1];
    for(int i=0;i<=n;i++){
        answer[i]=-1;
    }
    return countStepsToOne_helper(n,answer);
}