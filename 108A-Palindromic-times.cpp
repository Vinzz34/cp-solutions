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

int convert(char b){
	return (int)b-48;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a;
	cin>>a;
	int x=0;
	x=((int)a[1]-48);
	if(a[0]=='2' && a[1]=='3' && (convert(a[3])>=3 && convert(a[4])>=2)){
		cout<<"00:00"<<endl;
	}
	else if(convert(a[3])<x || (convert(a[3])==x && convert(a[4])<convert(a[0]))){
		if(x>=6){
			cout<<convert(a[0])+1<<"0:0"<<convert(a[0])+1<<endl;
		}
		else{
			cout<<a[0]<<x<<a[2]<<x<<a[0]<<endl;
		}
	}
	else{
		x++;
		if(x>=6){
			cout<<convert(a[0])+1<<"0:0"<<convert(a[0])+1<<endl;
		}
		else{
			cout<<a[0]<<x<<a[2]<<x<<a[0]<<endl;
		}
	}
	#ifdef VINZZ
	    cerr<<"Time: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
	#endif
	return 0;
}
// 
// 09:90
// 06:59
