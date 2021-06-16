#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
	ll n;
	cin>>n;
	vector<vector<ll>> matrix(n,vector<ll>(n,0));
	char a;
	for (ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cin>>a;
			if (a=='.')
				matrix[i][j]=1;
			else 
				matrix[i][j] = 0;
		}
	}
	vector<vector<ll>> dp(n,vector<ll>(n,0));
	for (ll i=0;i<n;i++){
		if (matrix[0][i]==0)
			break;
		dp[0][i]=1;
	}
	for (ll i=0;i<n;i++){
		if (matrix[i][0]==0)
			break;
		dp[i][0] = 1;
	}
	if (matrix[0][0]==0)
		dp[0][0] = 0;
	else 
		dp[0][0] = 1;
	for (ll i=1;i<n;i++){
		for(ll j=1;j<n;j++){
			if (matrix[i][j]!=0){
				dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
			}
		}
	}
	cout<<dp.back().back()<<endl;
}
