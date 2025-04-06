#include <bits/stdc++.h>
using namespace std;
int strlen(string s){
    int count = 0;
    for (int i=0;s[i]!='\0';i++){
        count ++;
    } return count;
}

int factorialp(int n){
    if (n<0){
        return -1;
    } int result = 1;
    for (int i=1;i<=n;i++){
        result *= i;
    } return result;
}

int perm(string s){
    int arr[26] = {0};
    for (int i=0;s[i]!=0;i++){
        int index = s[i] - 97;
        arr[index]++;
    }
    int ans = factorialp(strlen(s));
    for (int i=0;i<26;i++){
        if (arr[i]>1)
            ans = ans / factorialp(arr[i]);
    }
    return ans;
}

int main (){
    string s = "bbac";
    cout<<perm(s);
}