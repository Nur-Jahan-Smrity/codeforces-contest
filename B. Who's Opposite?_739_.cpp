//B. Who's Opposite?_739_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long a,b,c,i,j,count=0;
    cin>>a>>b>>c;
    ll diff=max(a,b)-min(a,b);
    ll mx=max(a,max(b,c));
    if(mx>diff*2)
        cout<<"-1"<<endl;
    else{
        if(c<=diff)
            cout<<c+diff<<endl;
        else
            cout<<c-diff<<endl;
    }
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
