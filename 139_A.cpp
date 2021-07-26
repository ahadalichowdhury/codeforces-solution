#include<iostream>
using namespace std;

int n,k,y;
bool q;

int main(){
    cin >> y >> k >> n;
    int x = k - y % k;

    while((x + y) <= n){
        cout << x << " ";
        x += k;
        q = 1;
    }
    if(!q){
        cout << -1;
    }
}
