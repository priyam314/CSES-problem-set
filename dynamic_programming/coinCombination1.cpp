#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
ll coinCombination1(ll,ll,ll[]);
int main(){
	ll n,x;
	cin>>n>>x;
	ll coins[n];
	ll i=0;
	while(i<n){
		cin>>coins[i];
		i++;
	}
	cout<<coinCombination1(n,x,coins)<<endl;
}
ll coinCombination1(ll n, ll x, ll coins[]){
	vector<ll> dp(x+1,0);
	dp[0] = 0;
	for (ll i=0; i<x+1;i++){
		for (ll j=0;j<n;j++){
			if (i-coins[j]>0)
				dp[i] = (dp[i] + dp[i-coins[j]])%mod;
			else if (i-coins[j]==0)
				dp[i] = dp[i] + 1;
		}
	}
	return dp[x];
}
