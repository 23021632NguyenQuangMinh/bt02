#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long x= 1e6,y = 1e6;

    while(n--){
        long long a,b;
        cin>>a>>b;
        x= min(x, a);
        y=min(y,b);
    }
    cout<<x*y;
}
