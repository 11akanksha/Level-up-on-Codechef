// Ques: https://www.codechef.com/submit/TACHSTCK
// Problem Code: TACHSTCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d;
	cin>>n>>d;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
	    cin>>v[i];
	}
	
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0; i < n-1; ++i){
	    if(v[i+1] -  v[i] <= d){
	      ans++;
	      i++;
	    }
	}
	cout<<ans;
	return 0;
}
