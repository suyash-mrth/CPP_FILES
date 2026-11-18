#include <bits/stdc++.h>
using namespace std;

int main () { 
	
	vector<int> v = {30, 10, 20, 40};
	
	sort(v.begin(), v.end());
	for (auto i : v) cout << i << endl;
	
	map<int, string> m = {{1, "Apple"}, {2, "Mango"}, {3, "Orange"}, {4, "Watermelon"}};
	
	for (auto j : m) cout << j.first << " = " << j.second << endl;	
}