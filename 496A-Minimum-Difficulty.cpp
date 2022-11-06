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
	int n;
	cin>>n;
	vector<int> a(n);
	FOR(i,0,n){
		cin>>a[i];
	}
	int mx=0;
	FOR(i,1,n){
		mx=max(mx,a[i]-a[i-1]);
	}
	int mn=1001;
	FOR(i,1,n-1){
		mn=min(mn,a[i+1]-a[i-1]);
	}
	cout<<max(mx,mn)<<endl;
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
