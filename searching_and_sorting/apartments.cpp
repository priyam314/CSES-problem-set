#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,m,k,count=0;
	cin>>n>>m>>k;
	ll a[n],b[m];
	ll nn=n,mm=m;
	while(n--)
		cin>>a[n];
	while(m--)
		cin>>b[m];
	sort(a,a+nn);
	sort(b,b+mm);
	for (ll i=0,j=0;i<nn;i++){
		while(j<mm && b[j]<a[i]-k)
			++j;
		if(j<mm && b[j]<=a[i]+k){
			count++;j++;
		}
	}
	cout<<count<<endl;
}
