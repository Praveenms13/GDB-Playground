#include <bits/stdc++.h>
using namespace std;


// Functional Recursion
int recFun(int n){
    if (n==0){
        return 0;
    }
    return n + recFun(n-1);
}
// In Parameterised Function, the print is done within the recusrion function

int main () {
    int n = 3;
    cout<<recFun(n)<<endl;
    return 0;
}