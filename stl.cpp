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
    // insert in vector is costliest, high resource sucker
    // insert in vector is costliest
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
    cout << endl
         << "After test1.empty(): " << test1.empty() << endl;
    cout << endl;
}
void list__()
{
    list<int> p;
    p.emplace_back(10);
    p.push_front(20);

    // rest all are same like in vector
}
void deque__()
{
    deque<int> p;
    p.push_back(10);
    p.push_front(20);
    p.emplace_back(30);

    p.pop_back();
    p.pop_front();
    p.back();
    p.front();
}
void stack__()
{
    stack<int> st;
    st.push(10);
    st.emplace(20);

    cout << "Top Element: " << st.top() << endl;
    st.pop();
    cout << "Top Element after pop: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;
    cout << st.empty() << endl; // to check if it is empty

    stack<int> p2;
    p2.swap(st);
    cout << "Top element of swap: " << p2.top();
    cout << endl;
}
void queue__()
{
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.emplace(30);
    cout << qu.back() << endl;

    qu.back() += 9;             // 30 + 9
    cout << qu.back() << endl;  // 39
    cout << qu.front() << endl; // 10
    qu.pop();
    cout << qu.front() << endl; // 20
}
void disp_prio_que(priority_queue<int> pq)
{
    cout << endl
         << "Inside loop" << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
void priority_queue__()
{
    /**
     * push => log(n)
     * top => o(1)
     * pop => log(n)
     */
    priority_queue<int> pq; // max_heap
    pq.push(10);
    pq.push(30);
    pq.push(12);
    pq.push(11);
    cout << pq.top() << endl;
    // while (! pq.empty()){
    //     cout<< pq.top()<<" ";
    //     pq.pop();
    // }
    // to display all the elements without popping
    disp_prio_que(pq);
    cout << pq.top() << endl;

    // to store the elements in ascending order, minimum heap, minimum priority queu
    priority_queue<int, vector<int>, greater<int>> pq2; // min heap
    pq2.push(30);
    pq2.push(28);
    pq2.emplace(31);
    cout << pq2.top();
    cout << endl;
}
void set__()
{
    set<int> st; // sorted and unique
    // here everything like erase, insert happens in (logn)
    cout << "In set" << endl;
    st.emplace(10);
    st.insert(20);
    st.insert(12);
    st.insert(10);
    st.insert(32);
    st.insert(30);
    // {10, 12, 20, 30, 32}
    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are as follows
    auto it = st.find(12); // Points to the iterator => address
    cout << "Value of it: " << *(it) << ", Address of it: " << &(it) << endl
         << st.count(10) << endl; // if the set exists shows 1(occurance) as it is unique else 0
    auto it2 = st.find(100);      // Points to the st.end(), to the last element + 1st address
    cout << "Value of it: " << *(it2) << ", Address of it2: " << &(it2) << endl;
    st.erase(20);

    // {1,2,3,4,5}
    auto iter1 = st.find(2);
    auto iter2 = st.find(4);
    st.erase(iter1, iter2); // after erase {1, 4, 5}

    set<int> st2;
    st2.emplace(10);
    st2.insert(18);
    st2.insert(12);
    st2.insert(10);
    st2.insert(32);
    st2.insert(30);
    // {10, 12, 18, 30, 32}
    for (int element : st2)
    {
        cout << element << " ";
    }
    cout << endl;
    auto itub1 = st2.upper_bound(20);                                                  // next of 20 is 30 so 30 is displayed
    auto itlb2 = st2.lower_bound(20);                                                  // points to same index as this is lowerbound
    cout << "Upper Bound of itub1: " << *(itub1) << endl;                              // 30
    cout << "Upper Bound of itub1 {N/A}: " << *(st2.upper_bound(11)) << endl;          // 12
    cout << "Upper Bound of itub1 {out of range}: " << *(st2.upper_bound(50)) << endl; // undefined behaviour => 4

    cout << "Lower Bound of itlb2: " << *(st2.lower_bound(18)) << endl;
    cout << "Lower Bound of itlb2 {N/A}: " << *(st2.lower_bound(11)) << endl;          // 12
    cout << "Lower Bound of itlb2 {out of range}: " << *(st2.lower_bound(50)) << endl; // undefined behaviour => 4
}
void binSearch()
{
    // bound gives the index as the result
    int n = 5;
    int a[] = {44, 21, 33, 3, 49};
    sort(a, a + n); // bin search can be done only in sorted arrays
    // {3, 21, 33, 44, 49}
    bool res = binary_search(a, a + n, 44);
    cout << "Binary Search 1: " << res << endl;
    cout << "Binary Search 2: " << binary_search(a, a + n, 5) << endl;
    cout << endl
         << "Upper and Lower works in log(n)" << endl;
    cout << "Lower Bound" << endl
         << "---------------------" << endl;
    int ind1 = lower_bound(a, a + n, 44) - a;
    int ind2 = lower_bound(a, a + n, 22) - a; // if the element is not present, then it points to immidiate next element 44
    int ind3 = lower_bound(a, a + n, 50) - a; // Points to last element + 1 str.end()

    // also can be written as this if it is an vector
    // int ind4 = lower_bound(a.begin(), a.end()) - a.begin();
    // cout<<a; // 0x7ffd62bc1cf0
    cout << &ind1 << ":" << ind1 << ":Val:" << a[ind1] << endl;
    cout << &ind2 << ":" << ind2 << ":Val:" << a[ind2] << endl;
    cout << &ind3 << ":" << ind3 << ":Val:" << a[ind3] << endl
         << endl;

    cout << "Lower Bound" << endl
         << "---------------------" << endl;
    /**
     * Upper bound returns the iterator to the next element
     */
    int up1 = upper_bound(a, a + n, 44) - a; // points to that element's index + 1
    int up2 = upper_bound(a, a + n, 22) - a; // if the element is not present, then it points to immidiate next element 44
    int up3 = upper_bound(a, a + n, 50) - a; // Points to last element + 1 str.end()

    // also can be written as this if it is an vector
    // int ind4 = upper_bound(a.begin(), a.end()) - a.begin();
    // cout<<a; // 0x7ffd62bc1cf0
    cout << &up1 << ":" << up1 << ":Val:" << a[up1] << endl;
    cout << &up2 << ":" << up2 << ":Val:" << a[up2] << endl;
    cout << &up3 << ":" << up3 << ":Val:" << a[up3] << endl;
    // --------------------------------------------------------------------
    /**
     * sample problem 1
     * find the first occurence of x in a sorted array, if not exists return -1
     * a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
     */
    int b[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    cout << "Value of x for lowerbound to find the first occurance ? ";
    int x;
    cin >> x;
    int result = lower_bound(b, b + sizeof(b) / sizeof(b[0]), x) - b; // lower bound excepts iterators or pointers as its first two arguements
    if (result != sizeof(b) / sizeof(b[0]) && b[result] == x)
        cout << "Found: " << result; // first checking the index is exists else will face runtime error
    else
        cout << -1;
    cout << endl;
    // --------------------------------------------------------------------
    /**
     * sample problem 2
     * find the last occurence of x in a sorted array, if not exists return -1
     * a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}
     */
    // IMPORTANT => Uppper bound always points to the first element that is greater than 4 if input r is 4
    int v[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    cout << "Value of x for upperbound to find the last occurance ? ";
    int r;
    cin >> r;
    int result1 = upper_bound(v, v + sizeof(v) / sizeof(v[0]), r) - v; // lower bound excepts iterators or pointers as its first two arguements
    result1--;
    // cout<<result1<<endl<<endl;
    if (result1 >= 0 && v[result1] == x)
        cout << "Found: " << result1;
    else
        cout << -1;
    cout << endl;
    // --------------------------------------------------------------------
    /**
     * sample problem 3
     * find the largest element smaller than x
     */
    int p3[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int c;
    cout << "value of c: ";
    cin >> c;
    int p3result = lower_bound(p3, p3 + sizeof(p3) / sizeof(p3[0]), c) - p3;
    p3result--;
    if (p3result >= 0)
        cout << p3[p3result];
    else
        cout << -1;
    cout << endl;
    // --------------------------------------------------------------------
    /**
     * sample problem 4
     * find the smallest element larger than x
     */
    int p4[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int f;
    cout << "value of f: ";
    cin >> f;
    int p4result = upper_bound(p4, p4 + sizeof(p4) / sizeof(p4[0]), f) - p4;
    // cout<<p4result<<endl<<sizeof(p4)/sizeof(p4[0])<<endl;
    if (p4result < (sizeof(p4) / sizeof(p4[0])))
        cout << p4[p4result];
    else
        cout << -1;
    cout << endl;
}
void multiset__()
{
    multiset<int> ms1;
    ms1.insert(89);
    ms1.insert(20);
    ms1.insert(23);
    ms1.insert(91);
    ms1.insert(45);
    ms1.insert(45);
    ms1.insert(54);
    ms1.insert(45);
    // {20 23 45 45 45 54 89 91}
    for (const auto &elements : ms1)
    {
        cout << elements << " ";
    }
    cout << endl
         << endl;
    // ms1.erase(45); // all 45 will get erased !!
    ms1.erase(ms1.find(45)); // only erases the first occurence
    // ms1.erase(ms1.find(20), ms1.find(20)+3); // this is not working !! see below
    cout << endl;
    for (const auto &elements : ms1)
    {
        cout << elements << " ";
    }
    cout << endl;
    auto itms1 = ms1.find(20); // returns a pointer address
    auto itms2 = ms1.find(45); // returns a pointer address
    ms1.erase(itms1, itms2);   // 1. to delete the elements upto particular number
    cout << endl
         << "After deleting from itms1 to itms2" << endl;
    for (const auto &elements : ms1)
    {
        cout << elements << " ";
    }
    cout << endl;
    if (itms1 != ms1.end())
    {
        // before => 45 45 54 89 91
        ms1.erase(ms1.find(45), next(ms1.find(45), 3)); // 2. to delete the next 3 elements
        // After => 89 91
    }
    cout << endl;
    for (int elements : ms1)
    {
        cout << elements << ", ";
    }
    cout << endl;
    cout << *(ms1.find(54)) << " " << "Inserting 45 two times !!" << endl;
    ms1.insert(45);
    ms1.insert(45);
    for (int elements : ms1)
    {
        cout << elements << " ";
    }
    cout << endl;
    cout << &*ms1.find(45) << " => " << *(ms1.find(45)) << " " << *((&*ms1.find(45))) << endl;
    cout << "45 Count: " << ms1.count(45) << endl;
    cout << endl;
}
void unorderedset__()
{
    unordered_set<int> us1; // it has randomized order, tine complexity most of the time is o(1) once in a blue moon it goes to o(n) (worst case !!)
    // all operations are similar to set, but lower bounds and upper bounds will not work here !!
}
void map__()
{
    // stores in sorted order with keys
    map<int, int> mp1; // keys, value unique => keys are unique !! // something similar to set
    // 3 ways to store the elements
    mp1[1] = 10;
    mp1.insert({2, 20});
    mp1.emplace(3, 30);
    cout << "mp1[1]: " << mp1[1] << endl;
    map<pair<int, int>, int> mp2;
    mp2[{2, 3}] = 10; // stores like {{2,3}, 10}
    mp2.insert({{3, 4}, 20});

    map<int, pair<int, int>> mp3;
    mp3[{1}] = {100, 200};
    mp3.insert({2, {200, 300}});

    for (const auto &it : mp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    for (const auto &it2 : mp2)
    {
        cout << "{" << it2.first.first << " " << it2.first.second << "}" << " " << it2.second << endl;
    }

    for (const auto &it3 : mp3)
    {
        cout << it3.first << " " << "{" << it3.second.first << " " << it3.second.second << "}" << endl;
    }
    cout << endl;
    auto its = mp1.find(1);
    cout << endl
         << "first:" << its->first;
    cout << endl
         << "second:" << its->second << endl;

    auto its2 = mp2.find({2, 3});
    cout << endl
         << "first.first:" << its2->first.first;
    cout << endl
         << "first.second:" << its2->first.second;
    cout << endl
         << "second:" << its2->second << endl;

    // lower_bound, Upper_bound, erase, size, swap, empty are same as above
}
void multimap__()
{
    // similar to set and multiset
    // similar to map, only thing is you can store duplicate keys, but everything is sorted
}
void unorderedmap__()
{
    // similar to map, only thing is you can store unique keys, but everything is randomized not sorted
}
int factorialf(int n)
{
    if (n < 0)
    {
        return -1;
    }
    int result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int strlenp(string str)
{
    int i = 0, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int permutationf(string str)
{
    // formula to find the permutation without functions
    // totalcharcount! / repeatcharcount!
    int arr[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        int index = (int)str[i] - 97; // a = 97, 97 - 97 => 0th index
        arr[index]++;
    }
    int totalcharcountfact = factorialf(strlenp(str));
    int ans = totalcharcountfact;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
            ans = ans / factorialf(arr[i]);
    }
    return ans;
}
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // if they are same
    if (p1.first > p2.first)
        return true;
    return false;
}
void Impalgos()
{
    // to sort an array in ascending order (Default)
    int a[] = {22, 120, 43, 76, 34};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);

    // to sort an array in descending order
    sort(a, a + n, greater<int>());

    // to sort a particular portion in an array (elements at indices 2 to 3)
    sort(a + 2, a + 4);

    // to sort a vector (make sure to add elements to the vector before sorting)
    vector<int> b = {5, 2, 9, 1, 5, 6}; // Example values
    sort(b.begin(), b.end());

    // to sort in its own fashion (pairs)
    pair<int, int> c[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = size(c);
    // sort it according to 2nd element
    // if second element is same, then sort it according to first element in descending
    // {4, 1}, {2, 1}, {1, 2}
    sort(c, c + m, comp);
    for (auto i : c)
    {
        cout << i.first << " " << i.second << endl;
    }

    int num = 7;
    cout << __builtin_popcount(num) << endl; // 3 => 3 bits of 1, shows the number of set bits

    long long num2 = 1657865778687;
    cout << __builtin_popcountll(num2) << endl; // 16

    // permutation with func
    string s = "bbac";
    int cpp = 0;
    sort(s.begin(), s.end());
    string cusper = s;
    do
    {
        cout << cpp << ":" << s << endl;
        cpp++;
    } while (next_permutation(s.begin(), s.end()));

    cout << "Factorisk of 10: " << factorialf(10) << endl
         << "Count of 'Praveen': " << strlenp("praveen") << endl;
    cout << cpp << " " << "Permutation of {" << cusper << "}: " << permutationf(cusper);
    // permutation without func

    cout << endl;
}

int main()
{
    // pair__();
    // vector__(); // for a vector singly linked list is maintained
    // push front is very very cheap in list, in terms of complexity
    // list__(); // in list internal operations are doubly linked list, like doubly linked list is maintained for a list
    // deque__() // exactly similar to vector with the push_front additionally with pop_back and front
    // stack__(); // FILO, all operations are in big o (n), all happens in constant time
    // queue__(); // FIFO, SImilar to Stack, size, swap, empty same as stack, big o (n) all happens in constant time
    // priority_queue__(); // inside tree ds is maintained , t is a heap based one, no direct way to access other elements, top elements can be accessed easily, size, swap and empty are same
    // set__(); // sorted and unique order !!, tree ds is used
    // multiset__(); // sorted but not unique !!, tree ds is used
    // unorderedset__(); // unique but not sorted !!, tree ds is used
    // binSearch();
    // map__();

    // container and iterators are finished !!
    // Important algorithms
    Impalgos();
    return 0;
}
