#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
 
    if(n<k){
        cout<<-1<<endl;
        return 0;
    }
 
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }
 
    sort(a.begin(),a.end());
    cout<<a[n-k]-1<<" "<<a[n-k]<<endl;
 
    return 0;
 
}
