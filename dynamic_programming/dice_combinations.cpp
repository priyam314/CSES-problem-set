#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
ll total(ll,ll[]);
int main(){
	ll n;
	cin>>n;
 	ll memo[n+1];
	for (int i=0;i<=n;i++)
		memo[i]=0;
	cout<<total(n,memo)%mod<<endl;
}
ll total(ll n,ll memo[]){
	if (n==0)
		return 1;
	else if (memo[n]!=0)
		return memo[n];
	ll summ = 0;
	ll max = 6;
	if (n<6)
		max = n;
	for (ll i=1;i<=max;i++)
		summ = summ + total(n-i,memo);
	memo[n] = summ%mod;
	return summ;
}
