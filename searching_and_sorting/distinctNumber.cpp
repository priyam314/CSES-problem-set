#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll list[n];
	while(n--)
		cin>>list[n];
	set<ll>umap;
	for (ll i:list)
		umap.insert(i);
	cout<<umap.size()<<endl;
}
