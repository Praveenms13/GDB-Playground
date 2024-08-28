#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 6, 23, 7, 6, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // with function
    // sort(arr, arr+n, greater <int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // // without function => Bubble sort
    // int i, j;
    // for (i=0;i<n;i++){
    //     for (j=0;j<n - i - 1;j++){
    //         if (arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove the duplicate elements
    // int unique = 0;
    // for (int i = 1;i< n;i++){
    //     if (arr[i] != arr[unique]){
    //         unique++;
    //         arr[unique] = arr[i];
    //     }
    // }
    // for (int i = 0;i< n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout << endl;

    // remove the duplicate elements with set
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        s1.insert(arr[i]);
    }

    for (auto const &it : s1)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<string> str1 = {"hello", "world", "praveen", "world"};
    set<string> str2;
    sort(str1.begin(), str1.end());

    for (auto const &strit : str1)
    {
        cout << strit << " ";
    }
    cout << endl;

    for (auto const &strit : str1)
    {
        str2.insert(strit);
    }
    cout << endl;

    for (auto const &strit2 : str2)
    {
        cout << strit2 << " ";
    }
    cout << endl;

    char str5[10] = "abcbdfccf";
    set<char> str7;
    for (int i = 0; i < sizeof(str5) - 1; i++)
    {
        str7.insert(str5[i]);
    }
    cout << endl;
    for (auto const &str7it : str7)
    {
        cout << str7it << " ";
    }
    cout<<endl;
    return 0;
}