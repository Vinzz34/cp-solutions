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

int rmzeros(int num){
	int dig=0,x=0,ans=0;
	while(num>0){
		dig=num%10;
		if(dig!=0){
			ans+=dig*(pow(10,x));
			x++;
		}
		num=num/10;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	cin>>a>>b;
	int c=0;
	c=a+b;
	a=rmzeros(a);
	b=rmzeros(b);
	c=rmzeros(c);
	if(c==a+b){
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
