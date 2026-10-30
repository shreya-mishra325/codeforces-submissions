#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	char first=s[0];
	s[0]=toupper(first);
	cout<<s;
}