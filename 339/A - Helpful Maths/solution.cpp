#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	vector<int> nums;
	for(int i=0; i<s.size(); i++){
	    int num;
	    if(s[i]=='+') continue;
	    else {
	        num=s[i]-'0';
	        nums.push_back(num);
	    }
	}
	string st="";
	sort(nums.begin(), nums.end());
	for(int i=0; i<nums.size(); i++){
	    st=st+to_string(nums[i]);
	    if(i!=nums.size()-1) st=st+"+";
	}
	cout<<st;
    return 0;
}