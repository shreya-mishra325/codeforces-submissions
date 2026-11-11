#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x;
	cin>>x;
	int count=0;
	while(x){
	    int choosen=5;
	    while(choosen>x){
	        choosen--;
	    }
	    x=x-choosen;
	    count++;
	}
	cout<<count;
}