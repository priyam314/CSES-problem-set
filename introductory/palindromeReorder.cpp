#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	string input;
	cin>>input;
	ll alpha[26];
	for(ll i=0;i<(ll)input.length();i++)
		alpha[input[i]-'A']=input[i];
	string resultfront="",resultback="";
	ll odd;
	for (ll i=0;i<26;i++){
		if (alpha[i]>0 && !(alpha[i] & 1)){
			for (ll j=0;j<alpha[i]/2;j++){
				resultfront+=(char)(i+'A');
			}
		}else if(alpha[i] & 1){
			odd = i;
		}
	}	
	resultback=resultfront;
	std::reverse(resultback.begin(),resultback.end());
	resultfront+=(char)(odd+'A');
	resultfront+=resultback;
	cout<<resultfront<<endl;
	return 0;
}
