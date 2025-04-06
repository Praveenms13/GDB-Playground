#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Input: " << endl;
    string line;
    unordered_map<string, vector<string>> transactions;
    while (getline(cin, line))
    {
        if (line.empty())
            break;
        int pos = line.find(",");
        if (pos != string::npos)
        {
            string transactionsId = line.substr(0, pos);
            string restOfLine = line.substr(pos + 1);
            transactions[restOfLine].push_back(transactionsId);
        }
    }

    // cout<<endl<<endl<<"Output: "<<endl;

    for (auto const &transactionsKeyIter : transactions)
    {
        // cout<<transactionsKeyIter.first<<" : ";
        // for (auto const& transactionsValIter:transactionsKeyIter.second){
        //     cout<<transactionsValIter<<" ";
        // }
        // cout << transactionsKeyIter.second.size();
        if (transactionsKeyIter.second.size() > 1)
        {
            cout<<"[";
            for (int transactionsValIter = 0;transactionsValIter < transactionsKeyIter.second.size();transactionsValIter++)
            {
                cout<<transactionsKeyIter.second[transactionsValIter];
                if (transactionsValIter < transactionsKeyIter.second.size() - 1){
                    cout<<",";
                }
            } 
            cout<<"]";
            cout<<endl;
        }
    }
    // cout<<endl;
    return 0;
}