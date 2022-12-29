#include <iostream>
using namespace std;
int balancedBTs(int n){
    if(n<=1){
        return 1;
    }
    int x=balancedBTs(n-1);
    int y=balancedBTs(n-2);
    return (x*x+2*x*y);
}