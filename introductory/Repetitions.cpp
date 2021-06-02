#include <iostream>
#include <string>
using namespace std;
#define ll long long
int main(){
	string input;
	ll max=1;
	cin>>input;
	ll count=1;
	for (int i=0;i<input.length()-1;i++){
		if (input[i+1]==input[i]){
			count++;
			if (count>max){
				max=count;
			}
		}else{
			count=1;
		}
	}
	cout<<max;
	return 0;
}
