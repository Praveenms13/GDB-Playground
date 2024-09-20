#include<bits/stdc++.h>
using namespace std;
void moveHash(char str[],int n)
{
    char str1[100], str2[100];
    int j = 0, k = 0;
    for (int i=0;str[i]!='\0';i++) {
        if (str[i] == '#'){
            str1[j]=str[i];
            j++;
        } else {
            str2[k] = str[i];
            k++;
        }
    }
    str1[j] = '\0';
    str2[k] = '\0';
    strcat(str1, str2);
    cout<<str1<<endl;
}

void countchar(char chararr[], int n){
    map<char, int> charmap;
    for (int i=0;chararr[i]!='\0';i++){
        charmap[chararr[i]]++;
    }
    for (auto const& iter:charmap){
        if (iter.second == 1){
            cout<<iter.first;
        } else {
            cout<<iter.first<<iter.second;
        }
    }
    cout<<endl;
}

void printSpiral(){
    int a[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int top = 0, bottom = sizeof(a)/sizeof(a[0]) - 1, left = 0, right = sizeof(a[0])/sizeof(a[0][0]) - 1;
    while(top <= bottom && left <= right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ";
        }
        top++;

        for (int i=top;i<=bottom;i++){
            cout<<a[i][right]<<" ";
        }
        right--;

         if (top <= bottom) {
            // Traverse from right to left on the bottom row
            for (int i = right; i >= left; i--) {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            // Traverse from bottom to top on the left column
            for (int i = bottom; i >= top; i--) {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }

    cout<<endl;
}

void nooftimesintarr(){
    vector<int>n = {1,2,3,3,4,1,4,5,1,2};
    map<int, int>nmap;
    for (int i=0;i<n.size();i++){
        nmap[n[i]]++;
    }
    for (auto const& iter:nmap){
        cout<<iter.first<<" occurs "<<iter.second<<" times"<<endl;
    }
}
int main()
{
    // char a[100], len;
    // cin>>a;
    // len = strlen(a);
    // moveHash(a, len);

    char chararr[100] = "abbccccc";
    countchar(chararr, strlen(chararr));

    printSpiral();

    nooftimesintarr();
    return 0;
}