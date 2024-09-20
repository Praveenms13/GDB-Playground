// C++ Program to Read Multiple Lines of Input 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str; 
	vector<string> s; 
	cout << "Enter multiple lines of text: " << endl; 
	while (getline(cin, str)) { 
		if (str.empty()) { 
			break; 
		} 
		s.push_back(str); 
	} 
	cout << "You entered the following lines: " << endl; 
	for (string& it : s) { 
		cout << it << endl;
	} 

	return 0; 
}
