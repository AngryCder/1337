#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

bool isPerfectSquare(ll x)
{ 
	ll s = sqrt(x);
	return (s*s==x);
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	//co("##########");nl;
    	cin>>n;
    	ll r=0,k=sqrt(2*n - 1);
    	//co(k);nl;
    	for (ll i = 3; i <= k; i+=2)
    	{
    		r+=1;

    	}
    	//nl;
    	co(r);nl;
    }
    return 0;
}

//g++ d1487.cpp -o run
//https://codeforces.com/problemset/problem/1487/D