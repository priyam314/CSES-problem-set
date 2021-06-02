#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
ll solve(ll);
int main(){
	ll n,i=1;
	cin>>n;
	while(i<=n){
		cout<<solve(i)<<endl;
		i++;
	}
	return 0;
}
ll solve(ll n){
	return (pow(n,2)*(pow(n,2)-1))/2-4*(n-1)*(n-2);
}

