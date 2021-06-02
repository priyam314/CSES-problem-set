#include <iostream>
using namespace std;
#define ll long long
int main(){
	ll n,sum=0,i=0,a;
	cin>>n;
	while(i<n-1){
		cin>>a;
		sum+=a;
		i++;
	}
	cout<<(n*(n+1))/2-sum;
	return 0;
}
