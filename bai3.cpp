#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int x=n-i; x>=1;x--) {
            cout << " ";
        }
        for (int x= i; x>1;x--) {
            cout << "*";
        }
        cout << "*";
        for (int x = i;x>1;x--) {
            cout << "*";
        }
        for (int x= n-i;x>=1;x--) {
            cout << " ";
        }
        cout << endl;
    }
}
