// Ques: https://www.codechef.com/submit/ALTER?tab=statement
// Code: ALTER

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    if(p%a == 0 and q%b == 0 and abs(p/a - q/b) <= 1) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
    }
	return 0;
}
