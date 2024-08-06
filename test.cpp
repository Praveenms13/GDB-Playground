#include <iostream>
using namespace std;
int main() { 
    int start = 0;
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j <= 'A' + i; j++) {
            cout<<j;
        }
        cout<< endl;
    }
    return 0;
}