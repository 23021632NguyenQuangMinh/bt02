/* Viết chương trình Prime đọc vào một số và in ra 'yes' nếu đó là một số nguyên tố. Nếu không thì in ra 'no'.*/
#include<bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

