// Ques: https://www.codechef.com/submit/SPEEDTEST

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        int a,x,b,y;
        cin>>a>>x>>b>>y;
        float ta = (float)a/x;
        float tb = (float)b/y;
        if(ta < tb) cout<<"Bob"<<endl;
        else if(tb < ta) cout<<"Alice"<<endl;
        else cout<<"Equal"<<endl;
    }	
	return 0;
}
