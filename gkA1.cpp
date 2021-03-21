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
	int t,x=1;
	cin>>t;
	while(t--){		
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int c=0;
		FOR(i,0,n/2){
			if(s[i]!=s[n-i-1]){
				c++;
			}
		}
		cout<<"Case #"<<x<<": ";
		cout<<abs(k-c)<<endl;
		x++;
		#ifdef VINZZ
				cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s\n";
		#endif
	}
	return 0;
}


