#include <bits/stdc++.h>
using namespace std;

int distinct(int* arr, int len)
{
    set<int> S; // declaring a set container using STL
    for (int i = 0; i < len; i++) {
        S.insert(arr[i]); // inserting all elements of the
                          // array into set
    }
    int ans = S.size(); // calculating the size of the set
    return ans;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int ar[n];
        int flag=0,counter=0;
        for (int j = 0; j < n; j++)
        {
            cin>>ar[j];
            if (flag>ar[j])counter=1;
            else counter++;
            flag=ar[j];
        }
        if (n==counter) cout<<0;
        else {
            int dist_element=distinct(ar, n-counter);
            cout <<dist_element<<endl; 
        }
    }
    
}