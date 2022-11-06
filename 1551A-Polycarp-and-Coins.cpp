/**
 *   author: Vinzz34
 *   Created: 29.07.2021 08:17:23
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
		int n;
		cin>>n;
		if(n%3==0){
			cout<<n/3<<" "<<n/3<<endl;
		}
		else{
			double a=n/3.0;
			a=round(a);
			if(a*3<n){
				cout<<(n/3)+1<<" "<<n/3<<endl;
			}
			else{
				cout<<n/3<<" "<<(n/3)+1<<endl;
			}
		}
	}
	return 0;
}
