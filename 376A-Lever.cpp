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
#define VINZ

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll cl=0,cr=0;
	int mi=0;
	FOR(i,0,s.length()){
		if(s[i]=='^'){
			mi=i;
			break;
		}
	}
	int x=1;
	for(int i=mi-1;i>=0;i--){
		if(isdigit(s[i])){
			cl+=x*((int)s[i]-48);
		}
		x++;
	}
	int y=1;
	for(int i=mi+1;i<s.length();i++){
		if(isdigit(s[i])){
			cr+=y*((int)s[i]-48);
		}
		y++;
	}
	if(cl==cr){
		cout<<"balance\n";
	}
	else if(cl>cr){
		cout<<"left\n";
	}
	else{
		cout<<"right"<<endl;
	}
	#ifdef VINZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
