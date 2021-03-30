/**
 *   author: Vinzz34
 *   Created: 29.03.2021 08:09:44
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

ll sumofd(ll a){
	ll sum=0;
	while(a>0){
		sum+=a%10;
		a=a/10;
	}
	return sum;
}

ll gcdSum(ll n){
	ll i=n;
	while(__gcd(i,sumofd(i))<=1){
		i++;
	}
	return i;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<gcdSum(n)<<endl;
	}
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
