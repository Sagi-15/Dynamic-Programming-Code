#include <iostream>
using namespace std;
/*
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
*/
//T type as long long bhi de skteeee...
template <typename T>
T fib_DP(int n){
    T *answer=new T[n+1];
    answer[0]=0;
    answer[1]=1;
    //started with initial answers bottom up
    for(int i=2;i<=n;i++){
        answer[i]=answer[i-1]+answer[i-2];
        //so used previously calculated answers aise
    }
    return answer[n];
}

template <typename T>
T fib_helper(T n,T* answer){
    //base case
    if(n<=1){
        return n;
    }
    //checking if answer already calculated in previous calls or not
    if(answer[n]!=-1){
        return answer[n];
    }
    else if(answer[n]==-1){
        //tabhi recursive calls kar rhe aur save answer value for future use
        answer[n]=fib_helper(n-1,answer)+fib_helper(n-2,answer);
        return answer[n];
    }
}
template <typename T>
T fib(T n){
    T *answer=new T[n+1];
    for(T i=0;i<n+1;i++){
        answer[i]=-1;
    }
    return fib_helper(n,answer);
}
int main(){
    long long n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fib_DP<long long>(i)<<" "<<i<<endl;
    }
    //try giving 3 digit number on both and see how fast fib is
}