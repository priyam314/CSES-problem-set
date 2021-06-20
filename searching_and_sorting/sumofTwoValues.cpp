#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,x;
	cin>>n>>x;
	vector<pair<ll,ll>> list(n);
	for(ll i=0;i<n;i++){
		cin>>list[i].first;
		list[i].second = i+1;
	}
	sort(list.begin(),list.end());
	ll i=0, nn=n-1;
	while(i<nn){
		if (list[i].first+list[nn].first==x){
			cout<<list[i].second<<" "<<list[nn].second;
			return 0;
		}else if(list[i].first+list[nn].first>x){
			nn--;
		}else{
			i++;
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}

