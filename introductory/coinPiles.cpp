#include <iostream>
using namespace std;
#define ll long long
bool threedivisible(ll a){
	if (a%3==0)
		return true;
	return false;
}
bool nonNegative(ll a){
	if (a>=0){
		return true;
	}
	return false;
}
int main(){
	ll t,a,b,x;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a==0 && b==0){
			cout<<"YES"<<"\n";
		}else if((a==0 && b!=0) || (a!=0 && b==0)){
			cout<<"NO"<<"\n";
		}else if (a>b){
			x=a-b;
			a-=2*x;
			b-=x;
			if (nonNegative(a) && nonNegative(b) && threedivisible(a))
				cout<<"YES"<<"\n";
			else{
				cout<<"NO"<<"\n";
			}
		}else if (b>a){
			x=b-a;
			b-=2*x;
			a-=x;
			if (nonNegative(a) && nonNegative(b) && threedivisible(a))
				cout<<"YES"<<"\n";
			else{
				cout<<"NO"<<"\n";
			}
		}else if(a==b){
			if (threedivisible(a))
				cout<<"YES"<<"\n";
			else{
				cout<<"NO"<<"\n";
			}
		}
	}
	return 0;
}

