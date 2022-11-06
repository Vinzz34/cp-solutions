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
	int k;
	cin>>k;
	k=k*2;
	char a;
	vector<int> ans(10);
	ans[0]=0;
	FOR(i,0,4){
		FOR(j,0,4){
			cin>>a;
			if(a!='.'){
				ans[(int)a-48]++;
			}
		}
	}
	int c=0;
	FOR(i,1,sz(ans)){
		if(ans[i]<=k){
			c++;
		}
	}
	if(c==sz(ans)-1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
