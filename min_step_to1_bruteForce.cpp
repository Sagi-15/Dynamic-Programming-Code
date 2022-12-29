#include <iostream>
using namespace std;

#include <climits>
int countMinStepsToOne(int n){
	if(n==1){
        return 0;
    }
    int n_minus_1_to_1=countMinStepsToOne(n-1);
    int n_by_2_to_1=INT_MAX,n_by_3_to_1=INT_MAX;
    if(n%2==0){
        n_by_2_to_1=countMinStepsToOne(n/2);
    }
    if(n%3==0){
        n_by_3_to_1=countMinStepsToOne(n/3);
    }
    //small calculation
    return min(n_minus_1_to_1,min(n_by_2_to_1,n_by_3_to_1))+1;
}