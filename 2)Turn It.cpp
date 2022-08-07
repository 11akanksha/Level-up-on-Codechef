// Ques: https://www.codechef.com/problems/NFS

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    if(u == v or (sqrt((u*u - 2*a*s) < 0?0:(u*u - 2*a*s)) <= v)) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
