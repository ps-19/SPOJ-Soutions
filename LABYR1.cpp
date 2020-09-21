// LABYR1 - Labyrinth

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INOUT freopen(name".inp","r", stdin); freopen(name".out","w",stdout);
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define memo(a,b) memset(a,b,sizeof(a))
#define lcm(x,y) boost::math::lcm(x,y)
#define display(x) for(auto dsp:x)cout<<dsp<<" ";cout<<"\n";
#define hi cout<<"hi\n";
#define ln "\n"
using namespace std;
const ld pi=acos(-1);
const ll mod=1e9+7;
const ll MAX=INT_MAX;
const ll MIN=INT_MIN;

bool vis[2000][2000];
ll dx[]={0,1,0,-1};
ll dy[]={1,0,-1,0};
char a[2000][2000];
ll n,m,mxdis;
pair<ll,ll> pr;

void reset()
{
    ll i,j;
    f0(i,2000)
    f0(j,2000)
    vis[i][j]=false;
}

void dfs(ll i,ll j,ll dis)
{
    vis[i][j]=true;
    
    if(mxdis<dis)
    {
        mxdis=dis;
        pr.ff=i,pr.ss=j;
    }
    
    ll k,x,y;
    f0(k,4)
    {
        x=i+dx[k];
        y=j+dy[k];
        
        if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==0&&a[x][y]=='.')
        dfs(x,y,dis+1);
    }
    
    
}

int main()
{
    FAST;
    ll t,i,j,k,len,x,y,z,c,f,flag,p,q,mx,mn,l,r,sum,ans,tmp,it,pos,avg,cnt;
    vpll vec;
    map<ll,ll> mappu;
    
    cin>>t;
    while(t--)
    {
        f=0;sum=0;flag=0;ans=0;cnt=0;mappu.clear();vec.clear();
        cin>>m>>n;
        reset();
        f0(i,n)
        f0(j,m)
        cin>>a[i][j];
        
        mxdis=-1;
        
        f0(i,n)
        f0(j,m)
        {
            if(a[j][j]=='#') continue;
            if(!vis[i][j])
            {
                cnt=0;
                dfs(i,j,0);
            }
        }
        
        reset();
        
        mxdis=-1;
        dfs(pr.ff,pr.ss,0);
        
        cout<<"Maximum rope length is "<<mxdis<<"."<<ln;
    }
	return 0;
}
