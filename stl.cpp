#include <bits/stdc++.h>
using namespace std;

void pair__()
{
    // Pairs for Integers
    pair<int, int> p = {10, 20};
    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, pair<int, int>> q = {10, {20, 30}};
    cout << q.first << endl;
    cout << q.second.first << endl;
    cout << q.second.second << endl;

    pair<int, pair<int, int>> arr[] = {{100, {200, 300}}, {400, {500, 600}}, {700, {800, 900}}};
    cout << arr[0].first << endl;
    cout << arr[0].second.first << endl;
    cout << arr[0].second.second << endl;

    int i = 10;
    pair<int, int> inputelements[i];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter first inputelement of pair " << i << endl;
        cin >> inputelements[i].first;
        cout << "Enter second inputelement of pair " << i << endl;
        cin >> inputelements[i].second;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << inputelements[i].first << " " << inputelements[i].second << endl;
    }

    // Pairs for Strings
    pair<string, string> p1 = {"Hello", "World"};
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<string, pair<string, string>> p2 = {"Hello", {"World", "!"}};
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    pair<string, pair<string, string>> arr1[] = {{"Hello", {"World", "!"}}, {"Hello", {"World", "!"}}, {"Hello", {"World", "!"}}};
    cout << arr1[0].first << endl;
    cout << arr1[0].second.first << endl;
    cout << arr1[0].second.second << endl;

    int n = 5;
    pair<string, string> inputelements1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter first inputelement of pair " << i << endl;
        cin >> inputelements1[i].first;
        cout << "Enter second inputelement of pair " << i << endl;
        cin >> inputelements1[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << inputelements[i].first << " " << inputelements1[i].second << endl;
    }
}
void vector__()
{
    vector<int> v;
    cout << "Size of Vector v: " << v.size() << endl;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    cout << "Size of Vector v: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int> b(5);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
    }

    vector<int> c(5, 10);
    cout << "Size of Vector c: " << c.size() << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << endl;
    }
    c.emplace_back(40);
    cout << "Size of Vector c: " << c.size() << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int> copyofc(c);
    int cc = 10;
    cout << "Size of Vector copyofc: " << copyofc.size() << endl;
    for (int i = 0; i < copyofc.size(); i++)
    {
        copyofc[i] = cc++;
        cout << copyofc[i] << endl;
    }
    cout << "Iterating Vector copyofc" << endl;
    vector<int>::iterator it = copyofc.begin(); // begin points to first element address
    cout << "Before Incrementing: " << *it << endl;
    it++;
    cout << "After Incrementing: " << *it << endl;
    cout << *it << endl;
    cout << *(it + 1) << endl;
    cout << *(it + 2) << endl;
    cout << *(it + 3) << endl;
    cout << *(it + 4) << endl;
    cout << *(it + 5) << endl;

    cout << "Iterating Vector it2" << endl;
    vector<int>::iterator it2 = copyofc.end(); // end points to last element + 1 address
    cout << "Before Decrementing: " << *it2 << endl;
    it2--;
    cout << "After Decrementing: " << *it2 << endl;
    cout << *it2 << endl;
    cout << *(it2 - 1) << endl;
    cout << *(it2 - 2) << endl;
    cout << *(it2 - 3) << endl;
    cout << *(it2 - 4) << endl;
    cout << *(it2 - 5) << endl;

    vector<int> test(5, 100);
    cout << "Test.Back(): " << test.back() << endl;
    vector<int>::iterator h = test.begin();

    // reverse iterator is must for rend and rbegin !!
    vector<int>::reverse_iterator it3 = test.rend();   // rend points to the first element address - 1, it++ points to the first element of the vector
    vector<int>::reverse_iterator it4 = test.rbegin(); // rbegin points to last element address similar to end, it++ na last element + 1

    cout << "Loop starts !!, Size of the loop: " << test.size() << endl;
    cout << "IT3 Loop: " << endl;
    for (int k = 0; k < test.size(); k++)
    {
        cout << k << " " << *it3 << endl;
        it3--;
    }

    cout << "IT4 Loop: " << endl;
    for (int k = 0; k < test.size(); k++)
    {
        cout << k << " " << *it4 << endl;
        it4++;
    }

    // Different Looping methods in iterators !!
    for (vector<int>::iterator loopit = test.begin(); loopit < test.end(); loopit++)
    {
        cout << *(loopit) << " ";
    }
    cout << endl;

    // simpler fashion than above
    for (auto loopit = test.begin(); loopit < test.end(); loopit++)
    {
        cout << *(loopit) << " ";
    }
    cout << endl;

    // more simpler
    for (auto it : c)
    { // here auto refers to int {10, 20, 30}, automatically runs through all the elements !!
        cout << it << " ";
    }
    cout << endl;

    vector<int> testerase;
    testerase.emplace_back(12);
    testerase.emplace_back(13);
    testerase.emplace_back(14);
    testerase.emplace_back(15);
    testerase.emplace_back(16);
    testerase.emplace_back(17);
    testerase.emplace_back(18);
    testerase.emplace_back(19);
    testerase.emplace_back(20);
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;

    // delete element from vector
    cout << "Erasing element from vector" << endl;
    testerase.erase(testerase.begin() + 1, testerase.begin() + 3); // to delete 1 st and 2 nd element
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;

    // Insert element in vector
    cout << "Inserting element in vector" << endl;
    testerase.insert(testerase.begin() + 1, 100);
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;

    // To Insert Multiple element in vector
    cout << "Inserting Multiple element in vector" << endl;
    testerase.insert(testerase.begin() + 1, 2, 200); // 2 => 2 copies of 200
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;

    // Copy the vector to an another vector
    vector<int> copyof(2, 50);
    cout << "Copy the vector to an another vector" << endl;
    testerase.insert(testerase.begin(), copyof.begin(), copyof.end());
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;
    testerase.pop_back();
    cout << "After pop_back()" << endl;
    for (auto testeraseloop = testerase.begin(); testeraseloop < testerase.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;
    vector<int> test1(5, 20);
    vector<int> test2(5, 30);
    cout << "Before Swap() of test1 and test2" << endl;
    for (auto testeraseloop = test1.begin(); testeraseloop < test1.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    for (auto testeraseloop = test2.begin(); testeraseloop < test2.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    cout << endl;
    cout << "After Swap() of test1 and test2" << endl;
    test1.swap(test2);
    for (auto testeraseloop = test1.begin(); testeraseloop < test1.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    for (auto testeraseloop = test2.begin(); testeraseloop < test2.end(); testeraseloop++)
    {
        cout << *(testeraseloop) << " ";
    }
    test2.clear(); // erase all the elements in the vector
    cout<<endl<<"After test1.empty(): "<<test1.empty();
    cout << endl;
}
int main()
{
    // pair__();
    vector__();
    return 0;
}
