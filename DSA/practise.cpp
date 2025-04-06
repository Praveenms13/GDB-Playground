#include <bits/stdc++.h>
using namespace std;
int main (){
    // Problem 1: swap pair elements
    pair <int, int> p = {10, 20};
    cout<<p.first<<" "<<p.second<<endl;
    swap(p.first, p.second);
    cout << p.first << " " << p.second << endl;
    int j = 0;
    j += p.first;
    j += p.second;
    cout << j << endl;

    // problem 2: sum of the vector elements 
    vector <int> v = {10, 20, 30, 40};
    int sum = 0;
    for (auto addv = v.begin(); addv < v.end(); addv++){
        sum += *(addv);
        // cout<<*(addv)<<" ";
    }
    cout<<"Total Sum = "<<sum<<endl;

    // Problem 3: pair of vectors 
    vector <string> names = {"Alice", "Bob", "Charlie"};
    vector <int> marks = {85, 92, 72};

    vector <pair<string, int>> students;
    int o; char k; string d;
    cout<<typeid(d).name()<<endl;
    string str1 = "Hello, world";
    string str2 = "world";
    if (str1.find(str2) != string::npos){
        cout<<"String Found !!"<<endl;
    } else {
        cout<<"String Not Found !!"<<endl;
    }
    for (auto i = 0; i<names.size(); i++){
        students.push_back(make_pair(names[i], marks[i]));
    }
    for (const auto &student: students){
        cout<<"Name: "<<student.first<<" "<<"Marks: "<<student.second<<endl;
    }

    // Problem 4: Largest and smallest in the vector
    vector <int> testDatas = {85, 92, 72, 100, 105};
    for (auto dispTestDatas = testDatas.begin(); dispTestDatas < testDatas.end(); dispTestDatas++){
        cout<<*(dispTestDatas)<<" ";
    }
    cout<<endl;
    for (auto i = 0; i < testDatas.size(); i++){
        cout<<testDatas[i]<<" ";
    }
    cout<<endl;
    cout<<"Max element in an vector: "<<*max_element(testDatas.begin(), testDatas.end())<<endl;
    cout<<"Min element in an vector: "<<*min_element(testDatas.begin(), testDatas.end())<<endl;
    int a[6] = {10, 11, 5, 20, 15, 9};
    cout<<"Max element in an array: "<<*max_element( a, a+(sizeof(a)/sizeof(a[0]) ))<<endl;
    cout<<"Min element in an array: "<<*min_element( a, a+(sizeof(a)/sizeof(a[0]) ))<<endl;
    cout<<endl;
    return 0;
}