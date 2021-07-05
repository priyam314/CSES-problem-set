#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
	ll n,q,a,b;
	cin>>n>>q;
	ll numbers[n];
	for (ll i=0;i<n;i++){
		cin>>numbers[i];
	}
	vector<ll> dp_numbers(n+1);
	for (ll i=1 ;i<n+1;i++){
		dp_numbers.at(i) = dp_numbers.at(i-1) + numbers[i-1];
	}
	for (ll i=0;i<q;i++){
		cin>>a>>b;
		cout<<dp_numbers.at(b)-dp_numbers.at(a-1)<<"\n";
	}
	return 0;
}
