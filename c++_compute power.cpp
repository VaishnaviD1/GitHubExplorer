#include<iostream>
using namespace std;
int power(int a , int b){
	int result = 1;
	while(b>0){
		if(b%2 == 1){
			result*=a;
		}
			a*=a;
			b/=2;
	}
	return result;
}
int main(){
	int a,b;
	cin>>a>>b;
	int result = power(a,b);
	return result;
}
