#include <iostream>
using namespace std;
#define ll long long
int main(){
	ll n,a,b;
	ll count=0;
	cin>>n;
	cin>>a;
	n=n-1;
	while(n--){
		cin>>b;
		if (b<a){
			count+=a-b;
		}
		a=max(a,b);
	}
	cout<<count;
	return 0;
}
int max(int a, int b){
	return a?a>b:b;
}
