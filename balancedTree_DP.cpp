#include <iostream>
using namespace std;
int balancedBTs(int n){
    int *answer=new int[n+1];
    answer[0]=1;
    answer[1]=1;
    for(int i=2;i<=n;i++){
        int x=answer[i-1];
        int y=answer[i-2];
        answer[i]=x*x+2*x*y;
    }
    return answer[n];
}
int main(){
    int n;
    cin>>n;
    cout<<balancedBTs(n);
}