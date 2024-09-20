#include <bits/stdc++.h>
using namespace std;
void strrevrec(int i, string &name, int n){
    if (i >= n/2){
        return ;
    }
    swap(name[i], name[n-i-1]);
    strrevrec(i+1, name, n);
}

void intarrrevrec(int i, int arr[], int l){
    if (i>=l/2){
        return ;
    }
    swap(arr[i], arr[l-i-1]);
    intarrrevrec(i+1, arr, l);
}

int recpalindromecheck(int i, string &palname, int p){
    if (i>=p/2){
        return -1;
    }
    swap(palname[i], palname[p-i-1]);
    return recpalindromecheck(i+1, palname, p);
}

bool recpalindromeSTRI(int i, string &palname, int p){ // time complexity is n/2
    if (i>=p/2) return true;
    if (palname[i] != palname[p-i-1]) return false;
    return recpalindromeSTRI(i+1, palname, p);
}

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
    // cout<<recFun(n)<<endl;

    // reverse a string using recursion
    string name = "Praveen";
    int k = name.size();
    cout<<"Before recusrion: "<<name<<endl;
    strrevrec(0, name, k);
    cout<<"After recusrion: "<<name<<endl;

    int l = 5;
    int arr[l] = {10, 20, 30, 40, 50};
    for (int i=0;i<5;i++) cout<<arr[i]<<" ";
    intarrrevrec(0, arr, l);
    cout<<endl;
    for (int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;


    // to check palindrome of the string !!
    string palname = "madam";
    string temppalname = palname;
    cout<<"before palindrome: "<<palname<<endl;
    recpalindromecheck(0, palname, palname.size());
    cout<<"after palindrome: "<<palname<<endl;
    (palname == temppalname) ? cout<<temppalname<<" is Palindrome" : cout<<temppalname<<" is not palindrome";
    cout<<endl; 

    cout<<recpalindromeSTRI(0, palname, palname.size())<<endl;
    return 0;
}