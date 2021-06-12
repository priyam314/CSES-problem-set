#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
ll minimumCoins(ll,ll,ll[]);
int main(){
	ll n, x;
	cin>>n>>x;
	ll coins[n];
	for (ll i=0;i<n;i++)
		cin>>coins[i];
	cout<<minimumCoins(n,x,coins)<<endl;
	return 0;
}
ll minimumCoins(ll n, ll x, ll coins[]){
	vector<ll> dp(x+1,1e9);
	dp[0] = 0;
	vector<ll> countvector;
	for (ll i=0;i<x+1;i++){
		for (ll j=0;j<n;j++){
			if (i-coins[j]>=0)
				dp[i] = min(dp[i],dp[i-coins[j]]+1);
		}
	}
	return dp[x]==1e9?-1:dp[x];
}
/*
ll minimumCoins(ll n, ll x, ll coins[], vector<ll> memo){
	if (x==0) return 1;
	else if (memo.at(x)!=0) return memo.at(x);
	ll count;
	vector<ll> countvector;
	for (ll i =0;i<n;i++){
		if (x-coins[i]>=0){
			count = 1 + minimumCoins(n,x-coins[i],coins,memo);
			countvector.push_back(count);
			count = 0;
		}
	}
	memo[n] = *min_element(countvector.begin(),countvector.end());
	return memo[n];
}
*/
