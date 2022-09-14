#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n,d;
    cin>>n>>d;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar + n, greater<ll>());
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        int needPeople=d/ar[i];
        n-=needPeople;
        if (n<=i) break;
        counter++;
    }
    cout<<counter;
    
    
}