#include <bits/stdc++.h>
using namespace std;
int main() {
    string cppString = "Hello, world!";
    int n = cppString.size();
    // cout<<n;
    for (int i=0;i<n;i++){
        for(int len = 1;len <= n-i;len++){
            // cout<<cppString[len]<<" ";
            cout<<cppString.substr(i, len)<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
