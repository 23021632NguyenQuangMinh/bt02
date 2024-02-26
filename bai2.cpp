/*Viết chương trình nhập một số nguyên dương N và in ra một tam giác kích thước N. Chẳng hạn với N bằng 5 thì tam giác có dạng như sau*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for (int x=n-i;x>=0;x--) {
            cout<< " ";
        }
        for (int y =i;y>=1;y--) {
            cout << "*";
        }
        cout << endl;
    }
}
