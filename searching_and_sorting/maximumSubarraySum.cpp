#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,maxSum=INT_MIN,currSum=INT_MIN;
	cin>>n;
	ll list[n];
	for (ll i=0;i<n;i++){
		cin>>list[i];
	}
	for (ll i=0;i<n;i++){
		if (currSum>=0)
			currSum += list[i];
		else
			currSum = list[i];
		maxSum = max(currSum,maxSum);
	}
	cout<<maxSum<<endl;
}	
