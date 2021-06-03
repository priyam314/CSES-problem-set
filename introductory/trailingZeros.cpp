#include <iostream>
using namespace std;
#define ll long long
ll trailingZeros(ll);
int main(){
	ll n;
	cin>>n;
	cout<<trailingZeros(n)<<endl;
	return 0;
}
ll trailingZeros(ll n){
	ll count = 0;
	while(n>=5){
		count += n/5;
		n/=5;
	}
	return count;
}
