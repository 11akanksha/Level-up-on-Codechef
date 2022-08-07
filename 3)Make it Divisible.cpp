// Ques: https://www.codechef.com/problems/MAKEDIV3

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i = 1; i <= n; ++i){
	        if(i == 1 or i == n) cout<<'3';
	        else cout<<'0';
	    }
	    cout<<endl;
	}
	return 0;
}
