#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>> n >> m;

    if(n>27)
    {
        cout<< m << endl;
    }
    else{
        int x=pow(2, n);
        int t=m % x;
        cout<< t << endl;
    }
}