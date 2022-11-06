/**
 *   author: Vinzz-34
 *   Created: 23.03.2021 10:25:58
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

ll ans(ll a,ll b){
	int count=0;
	for(ll i=a;i<=b;i*=a){
		count++;
	}
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll k,l;
	cin>>k>>l;
	if(l%k==0){
		if(pow(k,ans(k,l))==l){
			cout<<"YES"<<endl;
			cout<<ans(k,l)-1<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
