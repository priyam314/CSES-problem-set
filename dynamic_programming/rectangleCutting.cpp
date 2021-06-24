#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cut(int a,int b){
	int s=0;
	if (a==b){
		return 1;
	}
	int mini = min(a,b);
	if (a==mini){
		s += cut(a,b-a) + cut(a,a);
	}else{
		s += cut(a-b,b) + cut(b,b);
	}
	return s;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<cut(a,b)-1<<endl;
}
