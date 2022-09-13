// Ques: https://www.codechef.com/submit/EQPAIR?tab=statement

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> freq;
        for(int i = 0 ; i < n ;++i){
            int x;
            cin>>x;
            freq[x]++;
        }
        
        long long ans = 0;
        for(auto f:freq){
            long cf = f.second;
            ans += (cf * (cf-1))/2;
        }
        
        cout<<ans<<endl;
    }	
	return 0;
}
