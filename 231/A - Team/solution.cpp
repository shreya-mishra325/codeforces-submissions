#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int count=0;
	int T;
	cin>>T;
	while(T){
	    int c=0;
	    for(int i=0; i<3; i++){
	        int a;
	        cin>>a;
	        if(a==1) c++;
	    }
	    if(c>=2) count++;
	    T--;
	}
    cout<<count<<endl;
}