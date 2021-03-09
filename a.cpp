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
#define FOR(n) for(int i=0;i<(int)(n);i++)
#define FOR1(n) for(int i=1;i<=(int)(n);i++)
#define MOD 1000000007
#define EACH(v) for(auto x : v)
#define read(v) for(auto &x : v)


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int x=n;
	int a[1000];
	FOR(m){
		cin>>a[i];
	}
	sort(a,a+m);
	int mn=0,i=0,y=a[0];
	while(n--){
		mn+=y;
		y--;
		if(y==0){
			y=a[++i];
		}
	}
	int mx=0;
	sort(a,a+m,greater<int>());
	while(x--){
		mx+=a[0];
		a[0]--;
		sort(a,a+m,greater<int>());
	}
	cout<<mx<<" "<<mn;
	return 0;
}
