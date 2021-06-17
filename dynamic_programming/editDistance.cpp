#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
ll min(ll a,ll b,ll c){
	return (c<(a<b?a:b)?c:(a<b?a:b));
}
void print(vector<vector<ll>> dp){
	for (vector<ll> a : dp){
		for (ll b : a){
			cout<<b<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main(){
	string first,second;
	cin>>first>>second;
	ll length1 = first.length();
	ll length2 = second.length();
	vector<vector<ll>> dp(length2+1,vector<ll>(length1+1,0));
	for (ll i=0;i<length1+1;i++)
		dp[0][i] = i;
	for (ll i=0;i<length2+1;i++)
		dp[i][0] = i;
	// print(dp);
	for (ll i=1;i<=length2;i++){
		for (ll j=1;j<=length1;j++){
			if (second[i-1]==first[j-1])
				dp[i][j] = dp[i-1][j-1];
			else 
				dp[i][j] = min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
		}
		// print(dp);
	}
	cout<<dp.back().back()<<endl;
}
