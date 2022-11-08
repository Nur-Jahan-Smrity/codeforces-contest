#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    long long a,b,c,d,i=0,p=0;
    cin>>a>>b>>c>>d;
    // if you change ghe sequence  of condition then output may come wrong.....so don't chnge the sequence  of condition...
    if(a==b && b==c && c==d)
       cout<<"3"<<endl;
    else if( (a==b && d==c) || (a==c && b==d) || ( a==d && c==b) )
       cout<<"2"<<endl;
    else if((a==b && b==c ) || ( b==c && c==d ) || (a==c && c==d) )
       cout<<"2"<<endl;
    else if(a==b || b==c || c==d || d==a || a==c || b==d)
       cout<<"1"<<endl;
    else
      cout<<"0"<<endl;
     return 0;
}
