#include <iostream>
#include <set>
using namespace std;
#define ll long long
int main(){
	ll n,a;
	cin>>n;
	set<ll> list1;
	while(n--){
		set<ll> list;
		cin>>a;
		for (auto it=list1.begin(); it!=list1.end(); it++)
			list.insert((*it)+a);		
		list1.insert(a);
		for (auto it=list.begin(); it!=list.end(); it++)
			list1.insert(*it);
	}
	cout<<list1.size()<<endl;
	for (auto it=list1.begin(); it!=list1.end(); it++)
		cout<<*it<<" ";

	return 0;
}
