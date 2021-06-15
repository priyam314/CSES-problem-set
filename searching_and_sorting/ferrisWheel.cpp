#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,x,nn,count=0;
	cin>>n>>x;
	nn = n;
	ll list[n];
	while(n--)
		cin>>list[n];
	sort(list,list+nn);
	ll i=0,j=nn-1;
	bool seated[nn];
	for (ll i=0;i<nn;i++)
		seated[i]=false;
	while(i<j){
		if (list[i]+list[j]>x){
			--j;
		}else{
			seated[i]=seated[j]=true;
			++count;++i;--j;
		}
	}
	for (ll i=0;i<nn;i++){
		if (seated[i]==false)
			++count;
	}
	cout<<count<<endl;
}
