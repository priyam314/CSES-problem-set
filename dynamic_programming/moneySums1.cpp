#include <iostream>
#include <set>
using namespace std;
#define ll long long
int main(){
	ll n,a;
	cin>>n;
	set<ll> list;
	while(n--){
		cin>>a;
		for (auto it=list.begin(); it!= list.end() ;it++)
			list.insert((*it)+a);
		list.insert(a);
	}
	cout<<list.size()<<endl;
	for(auto it=list.begin(); it!=list.end(); it++)
		cout<<*it<<" ";
	return 0;
}
