#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
 
        string a, b;
        cin>>a>>b;
 
        vector<int> freq(26, 0);
 
        for(char ch:a) {
            freq[ch-'a']++;
        }
        for(char ch:b) {
            freq[ch-'a']--;
        }
        freq['s'-'a']--;
        freq['i'-'a']--;
        freq['x'-'a']--;
        bool ans=true;
        for(int i=0; i<26; i++) {
            if(freq[i]!=0) {
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<'
';
    }
    return 0;
}