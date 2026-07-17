#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int T;
	cin>>T;
	int ans=0;
	while(T){
	    string s;
	    cin>>s;
	    if(s[0]=='+') ans=ans+1;
	    if(s[0]=='-') ans=ans-1;
	    if(s[2]=='+') ans=ans+1;
	    if(s[2]=='-') ans=ans-1;
	    T--;
	}
	cout<<ans<<endl;
}