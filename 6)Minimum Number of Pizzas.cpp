// Ques: https://www.codechef.com/submit/MINPIZZAS?tab=statement
// Code: MINPIZZAS

//#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int ans = n/__gcd(k,n);
	    cout<<ans<<endl;
	}
	return 0;
}
