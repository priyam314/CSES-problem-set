#include <iostream>
using namespace std;
#define ll long long
ll blockValue(ll,ll);
ll pow(ll,ll);
int main(){
	ll t,x,y;
	cin>>t;
	while(t--){
		cin>>y>>x;
		cout<<blockValue(x,y)<<endl;
	}
	return 0;
}
ll blockValue(ll x, ll y){
	if (y>=x && !(y & 1)){
		return pow(y,2)-x+1; 
	}else if (y>=x && (y & 1)){
		if (y>2)
			return y*(y-2)+1+x;
		return 1;
	}else if (x>=y && (x & 1)){
		return pow(x,2)-y+1;
	}else if (x>=y && !(x & 1)){
		if (x>1)
			return x*(x-2)+1+y;
		return 1;
	}
	return -1;
}
ll pow(ll a,ll b){
	ll ans = 1;
	while(b>0){
		if (1&b){
			ans = ans*a;
		}
		a = a*a;
		b = b>>1;
	}
	return ans;
}
