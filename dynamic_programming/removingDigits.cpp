#include <iostream>
using namespace std;
#define ll long long
ll maxx(ll n){
	ll max=0;
	ll m;
	while(n>0){
		m = n%10;
		if (m>max)
			max = m;
		n/=10;
	}
	return max;
}
int main(){
	ll n;
	cin>>n;
	ll max;
	ll count=0;
	while(n!=0){
		max = maxx(n);
		n = n-max;
		count++;		
	}
	cout<<count<<endl;
}

