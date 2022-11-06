/**
 *   author: Vinzz34
 *   Created: 25.03.2021 07:58:09
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define ld long double
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define PB push_back
#define MP make_pair
#define fi first
#define se second
#define sz(a) int((a).size())
#define FOR(a,b,c) for(int a=b;a<(int)(c);a++)
#define MOD 1000000007
#define EACH(v) for(auto x : v)
#define VINZZ

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,m,x;
		cin>>n>>m>>x;
		ll ans=0;
		ans=x/n;
		if(ans*n<x){
			++ans;
		}
		ll y=0;
		y=(n*(ans-1))+1;
		ll z=0;
		z=abs(x-y);
		ans+=z*m;
		cout<<ans<<endl;
	}	
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
