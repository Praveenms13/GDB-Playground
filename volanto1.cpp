#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::string str = "HelloWorld";
    // Insert a space character at index 5
    str.insert(5, 2, '-');
    cout << "Modified string: " << str << endl;

    string ss;
    vector <string> ssvector;
    while (getline(cin, ss))
    {
        if (ss.empty())
            break;
        ssvector.push_back(ss);
    }

    for (auto const& ssvectorelements:ssvector){
        int c = 0;
        for (char ch:ssvectorelements){
            if(isupper(ch)){
                c++;
                if (c!=1){
                    cout<<"-";
                }
                cout<<static_cast<char>(tolower(ch));
            } else {
                cout<<ch;
            }
        } cout<<endl;
    }
    cout << endl;
    return 0;
}
