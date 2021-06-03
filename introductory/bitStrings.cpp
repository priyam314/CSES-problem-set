#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
ll pow(ll,ll);
int main(){
	ll n;
	cin>>n;
	cout<<pow(2,n)<<endl;
	return 0;
}
ll pow(ll x,ll y){
	ll ans =1;
	while(y>0){
		if(1 & y){
			ans = (ans * x)%mod;
		}
		x = (x*x)%mod;
		y = y>>1;
	}
	return ans;
}
