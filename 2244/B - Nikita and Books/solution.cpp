#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        long long need = 1;
        long long extra = 0;
        bool flag = true;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            if(flag) {
                long long current = x + extra;
 
                if(current < need) {
                    flag = false;
                }
                else {
                    extra = current - need;
                    need++;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}