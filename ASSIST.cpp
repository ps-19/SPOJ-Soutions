//ASSIST - Assistance Required
// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define fab(i,a,b) for(i=a;i<=b;i++)
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;

int main()
{
    FAST;
    ll t,n,i,j,k,len,x,y,z,c,pos;
    
    vll a;
    vll v;
    fab(i,2,38000)
    a.pb(i);
    
    fab(i,0,a.size()-1)
    {
        v.clear();
        for(j=i+a[i];j<a.size();j+=a[i])
        v.pb(j);
        
        c=0;
        for(auto x:v)
        a.erase(a.begin()+x-(c++));
    }
    
    while(cin>>t)
    {
        if(!t)
        break;
        cout<<a[t-1]<<ln;
    }
	return 0;
}
